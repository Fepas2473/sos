#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void app_main() {
printf("Hello, Felipe!\n");
gpio_set_direction(2,GPIO_MODE_OUTPUT);
 
  
  gpio_set_level(2,1);
    printf("Socorro!\n");
    vTaskDelay(500 / portTICK_PERIOD_MS);
  gpio_set_level(2,0);
    printf("Ajuda\n");
    vTaskDelay(200 / portTICK_PERIOD_MS);
  gpio_set_level(2,1);
    vTaskDelay(500 / portTICK_PERIOD_MS);
  gpio_set_level(2,0);
    vTaskDelay(200 / portTICK_PERIOD_MS);
  gpio_set_level(2,1);
    vTaskDelay(500 / portTICK_PERIOD_MS);
  gpio_set_level(2,0);
    vTaskDelay(200 / portTICK_PERIOD_MS);
  }

