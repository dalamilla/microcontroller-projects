/**
 * Traffic Lights
 *
 * Traffic lights simulator.
 */
#include "Arduino.h"

int RED_LIGHT = 0;
int YELLOW_LIGHT = 1;
int GREEN_LIGHT = 2;

void setup()
{
  // initialize LEDs digital pin as an output.
  pinMode(RED_LIGHT, OUTPUT);
  pinMode(YELLOW_LIGHT, OUTPUT);
  pinMode(GREEN_LIGHT, OUTPUT);
}

// red light operation function
void red_light(int operation_time)
{
  digitalWrite(RED_LIGHT, HIGH);
  digitalWrite(YELLOW_LIGHT, LOW);
  digitalWrite(GREEN_LIGHT, LOW);
  delay(operation_time);
}

// yellow light operation function
void yellow_light(int blink_times, int blink_time)
{
  digitalWrite(RED_LIGHT, LOW);
  digitalWrite(GREEN_LIGHT, LOW);
  for (int i = 0; i < blink_times; i++)
  {
    digitalWrite(YELLOW_LIGHT, HIGH);
    delay(blink_time);
    digitalWrite(YELLOW_LIGHT, LOW);
    delay(blink_time);
  }
}

// green light operation function
void green_light(int operation_time)
{
  digitalWrite(RED_LIGHT, LOW);
  digitalWrite(YELLOW_LIGHT, LOW);
  digitalWrite(GREEN_LIGHT, HIGH);
  delay(operation_time);
}

void loop()
{
  int operation_time = 5000;
  int blink_times = 3;
  int blink_time = 500;

  red_light(operation_time);
  yellow_light(blink_times, blink_time);
  green_light(operation_time);
}
