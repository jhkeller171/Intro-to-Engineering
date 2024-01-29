int button = 13;
int redLED = 10;
int greenLED = 11;
int piezo = 12;
bool gate = true;

#include <Servo.h>

Servo servo_Standard;

void setup() {
  pinMode(button,INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  servo_Standard.attach(9);
  Serial.begin(9600);
}

void loop() {
  if (gate == true){
    digitalWrite(redLED, HIGH);
    if (digitalRead(button)==HIGH){
      Serial.print("Button Pressed");
      delay(2000);
      tone(piezo, 837.31,250);
       digitalWrite(redLED, LOW);
       digitalWrite(greenLED, HIGH);
      servo_Standard.write(90);
      delay(5000);
      gate = false;
    }
  } else {
    servo_Standard.write(0);
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    gate = true;
  }
}
