#include <sys/socket.h>
#include <sys/un.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define MY_SOCK_PATH "/somepath"
#define LISTEN_BACKLOG 50

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

int main(int argc, char *argv[]) {
    int sfd, cfd;
    struct sockaddr_un my_addr, peer_addr;
    socklen_t peer_addr_size;
    char buf[1024];

    sfd = socket(AF_INET, SOCK_STREAM, 0);
    
    if (sfd == -1) {
        handle_error("socket");
    }
    
    /* Clear structure. */
    memset(&my_addr, 0, sizeof(struct sockaddr_un));
                        
    my_addr.sun_family = AF_INET;

    strncpy(my_addr.sun_path, MY_SOCK_PATH, sizeof(my_addr.sun_path) - 1);

    if (bind(sfd, (struct sockaddr *) &my_addr, sizeof(struct sockaddr_un)) == -1) {
        handle_error("bind");
    }    

    if (listen(sfd, LISTEN_BACKLOG) == -1) {
        handle_error("listen");
    }
        
    /* Now we can accept incoming connections one at a time using accept(2). */

    peer_addr_size = sizeof(struct sockaddr_un);
    
    cfd = accept(sfd, (struct sockaddr *) &peer_addr, &peer_addr_size);
    
    if (cfd == -1) {
        handle_error("accept");
    }

    /* Code to deal with incoming connection(s)... */

    int read_len = read(cfd, buf, sizeof(buf));

    buf[read_len] = '\0';

    while (read_len > 0) {
        printf("%s\n", buf);
        read_len = read(cfd, buf, sizeof(buf));
    }

    /* When no longer required, the socket pathname, MY_SOCK_PATH should be deleted using unlink(2) or remove(3) */
}