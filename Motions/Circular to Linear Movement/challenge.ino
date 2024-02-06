#include <Servo.h>

Servo servo_Standard;
int pot = A5;
int greenLed = 12;
int redLed = 11;
int button = 10;
int potValue;

void setup() {
  Serial.begin(9600);
  servo_Standard.attach(13);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == HIGH){
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
    potValue = analogRead(pot);
    servo_Standard.write(map(potValue,0,1023,10,90));
  } else {
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
  }
}
