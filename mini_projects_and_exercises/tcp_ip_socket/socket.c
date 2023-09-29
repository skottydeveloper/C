#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Maximum number of queued connections.
#define LISTEN_BACKLOG 50

// Macro to handle errors by printing the error message and exiting.
#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

int main(int argc, char *argv[]) {
    // Socket descriptors for server and client.
    int sfd, cfd;

    // Structures to store server and client address information.
    struct sockaddr_in my_addr, peer_addr;

    // Variable to store the size of client address structure.
    socklen_t peer_addr_size;

    // Buffer to store data read from client.
    char buf[1024];

    // Check if port number is provided in command-line arguments.
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <port>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Convert the port number from string to integer.
    int port = atoi(argv[1]);

    // Create a new socket of type TCP (SOCK_STREAM).
    sfd = socket(AF_INET, SOCK_STREAM, 0);
    
    if (sfd == -1) {
        handle_error("socket");
    }

    // Clear and initialise the server address structure.
    memset(&my_addr, 0, sizeof(struct sockaddr_in));

    // Internet address family.
    my_addr.sin_family = AF_INET;

    // Convert port number to network byte order.
    my_addr.sin_port = htons(port);

    // Allow any incoming IP address.
    my_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    // Bind the socket to the port.
    if (bind(sfd, (struct sockaddr *) &my_addr, sizeof(struct sockaddr_in)) == -1) {
        handle_error("bind");
    }    

    // Mark the socket as passive and specify the maximum length for the queue of pending connections.
    if (listen(sfd, LISTEN_BACKLOG) == -1) {
        handle_error("listen");
    }

    // Continuously listen for new clients.
    while (1) {
        peer_addr_size = sizeof(struct sockaddr_in);

        // Accept an incoming connection.
        cfd = accept(sfd, (struct sockaddr *) &peer_addr, &peer_addr_size);

        if (cfd == -1) {
            handle_error("accept");
        }

        int read_len;

        // Process the data from connected client, and continue reading until client disconnects or sends a 0 length message.
        do {
            // Read data from client, subtract 1 to leave space for null-termination.
            read_len = read(cfd, buf, sizeof(buf) - 1);

            if (read_len > 0) {
                // Null-terminate the string.
                buf[read_len] = '\0';

                // Print the received data.
                printf("%s\n", buf);
            }
        } while (read_len > 0);

        // Close client connection.
        close(cfd);
    }

    return 0;
}