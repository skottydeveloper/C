#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "driver/gpio.h"
#include "esp_rom_sys.h"

#define BUZZER_PIN 32 // GPI32

// Declare a semaphore handle for the mutex.
SemaphoreHandle_t buzzer_mutex;

// The buzzer_task function is designed to be run in a separate FreeRTOS task.
void buzzer_task(void *arg) {
    // Get the task number from the argument passed to the function.
    int task_num = (int) arg;

    // Calculate the delay period based on the task's number.
    int delay_period = (task_num) * 1000 / portTICK_PERIOD_MS;

    // Declare a variable to store the "esp_rom_delay" value.
    int esp_rom_delay;

    // Set the "esp_rom_delay" value based on the task number.
    if (task_num > 1) {
        esp_rom_delay = 250;
    } else {
        esp_rom_delay = 125;
    }

    // Main loop of the task.
    while (1) {
        /* Try to take the mutex. This call will block (wait) until the mutex is available.
           "portMAX_DELAY" means it will wait indefinitely for the mutex to be available. */
        if (xSemaphoreTake(buzzer_mutex, portMAX_DELAY) == pdTRUE) {
            // If the mutex is successfully taken, print the task number that got access to the buzzer.
            printf("Task %d got access to buzzer.\n", task_num);

            // Generate square wave signal at 1 kHz.
            for (int i = 0; i < 1000; i++) {
                // Set the buzzer pin to high (1).
                gpio_set_level(BUZZER_PIN, 1);

                // Delay for the specified "esp_rom_delay" value.
                esp_rom_delay_us(esp_rom_delay);

                // Set the buzzer pin to low (0).
                gpio_set_level(BUZZER_PIN, 0);

                // Delay for the specified "esp_rom_delay" value.
                esp_rom_delay_us(esp_rom_delay);
            }

            // Release the mutex after using the buzzer, allowing other tasks to take control of it.
            xSemaphoreGive(buzzer_mutex);

            // Wait for the calculated delay period before trying to take the mutex again.
            vTaskDelay(delay_period);
        }
    }
}

void app_main(void) {
    // Configure buzzer pin as output.
    gpio_set_direction(BUZZER_PIN, GPIO_MODE_OUTPUT);

    // Create the mutex for buzzer access. This is a binary semaphore used for mutual exclusion.
    buzzer_mutex = xSemaphoreCreateMutex();

    /* Create two tasks with different priorities, each pinned to a different core. You can assign
    higher priorities to tasks running on Core 0 and lower priorities to tasks running on Core 1. */

    // Task 1 is pinned to Core 0 with a higher priority (2).
    xTaskCreatePinnedToCore(buzzer_task, "Buzzer Task 1", 2048, (void *) 1, 2, NULL, 0);

    // Task 2 is pinned to Core 1 with a lower priority (1).
    xTaskCreatePinnedToCore(buzzer_task, "Buzzer Task 2", 2048, (void *) 2, 1, NULL, 1);
}