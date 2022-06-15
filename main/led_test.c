#include "driver/gpio.h"

#define LED_PIN GPIO_NUM_32

void app_main(void)
{
  gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);

  while (1)
  {
    gpio_set_level(LED_PIN, 1);
  }
}