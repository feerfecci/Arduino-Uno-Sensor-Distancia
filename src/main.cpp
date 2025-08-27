// C++ code para Arduino
#include <Arduino.h>

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  Serial.println(0.01723 * readUltrasonicDistance(5, 4));

  if (0.01723 * readUltrasonicDistance(5, 4) < 75) {
    tone(11, 523, 1500); // play tone 60 (C5 = 523 Hz)
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  } else {
    if (0.01723 * readUltrasonicDistance(5, 4) < 150) {
      tone(11, 523, 1000); // play tone 60 (C5 = 523 Hz)
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);
    } else {
      if (0.01723 * readUltrasonicDistance(5, 4) >= 150) {
        noTone(11);
        digitalWrite(10, LOW);
        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
      }
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}