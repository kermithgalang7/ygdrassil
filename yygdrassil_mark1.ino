
#include "led.h"

#include "main_config.h"

int seconds_checker(int *counter)
{
  //scenario:
  //  g_ctr = 2334, millis() = 3983: true
  //  g_ctr = 9423, millis() = overflow at 10,000 
  //                new value = 645: 
  int current_millis = millis();

  if(*counter > current_millis)
  {
    *counter = 0;
  }
  if((current_millis - *counter) > 1000)
  {
    *counter = current_millis;
    return SUCCESS;
  }

  return FAILED;
}

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  Serial.println();
  Serial.println("Relay Driver");

  init_led();
}

int sensorValue;

int gled_ctr = 0;

void loop() {
  // put your main code here, to run repeatedly:

  // sensorValue = analogRead(A0);
  // Serial.print("Sensor Value : ");
  // Serial.println(sensorValue);

  if(seconds_checker(&gled_ctr) == SUCCESS)
  {
    service_led();
  }
  // delay(1000);                      // wait for a milliseconds
  // delayMicroseconds(10);            // wait in microseconds
}
