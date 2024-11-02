#include "Arduino.h"

#include "led.h"

#include "main_config.h"

int g_led_stat = 0;

int init_led(void)
{
  pinMode(LED_BUILTIN, OUTPUT);

  return RET_FAIL;
}

void service_led(void)
{
  if(g_led_stat == 0)
  {
    digitalWrite(LED_BUILTIN, LOW);
    g_led_stat = 1;
  }
  else
  {
    digitalWrite(LED_BUILTIN, HIGH);
    g_led_stat = 0;
  }

  return;
}