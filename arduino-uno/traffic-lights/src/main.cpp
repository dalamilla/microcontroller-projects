/**
 * Traffic Lights
 *
 * Traffic lights simulator.
 */
#include "Arduino.h"

int RED_LIGHT = 2;
int YELLOW_LIGHT = 3;
int GREEN_LIGHT = 4;

void setup()
{
  // initialize LEDs digital pin as an output.
  pinMode(RED_LIGHT, OUTPUT);
  pinMode(YELLOW_LIGHT, OUTPUT);
  pinMode(GREEN_LIGHT, OUTPUT);
}

void loop()
{
  int operation_time = 5000;
  int blink_times = 3;
  int blink_time = 500;

  // red light operation
  digitalWrite(RED_LIGHT, HIGH);
  digitalWrite(YELLOW_LIGHT, LOW);
  digitalWrite(GREEN_LIGHT, LOW);
  delay(operation_time);

  // yellow light operation
  digitalWrite(RED_LIGHT, LOW);
  digitalWrite(GREEN_LIGHT, LOW);
  for (int i = 0; i < blink_times; i++)
  {
    digitalWrite(YELLOW_LIGHT, HIGH);
    delay(blink_time);
    digitalWrite(YELLOW_LIGHT, LOW);
    delay(blink_time);
  }

  // green light operation
  digitalWrite(RED_LIGHT, LOW);
  digitalWrite(YELLOW_LIGHT, LOW);
  digitalWrite(GREEN_LIGHT, HIGH);
  delay(operation_time);
}
