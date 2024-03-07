/*
  CTC GO! MOTION 
  PROJECT - Wiggler

  This sketch is written to accompany Stage 5 of the Wiggler project
*/

#include <Servo.h>

Servo servo_drive;
Servo servo_steer;

int lightSensor_1 = A0;
int lightSensor_2 = A1;

int lightValue_1 = 0;
int lightValue_2 = 0;

int left = 30;
int right = 150;

void setup() 
{  
  servo_steer.attach(6);
  servo_drive.attach(9);
  Serial.begin(9600);
}

void loop() 
{
  lightValue_1 = analogRead(lightSensor_1);
  lightValue_2 = analogRead(lightSensor_2);

  Serial.print("First Light Value: ");
  Serial.println(lightValue_1);
  Serial.print("Second Light Value: ");
  Serial.println(lightValue_2);

  servo_drive.write(120);
  servo_steer.write(90);
  delay(15);

  if(lightValue_1 >= 450) {
  /*servo_drive.write(60);
    servo_steer.write(30);
    delay(3000); */
    turnDirection(right);
  }
  
  if(lightValue_2 >= 450) {
  /*servo_drive.write(60);
    servo_steer.write(150);
    delay(3000); */
    turnDirection(left);
  }
  
  if(lightValue_1 <= 50 && lightValue_2 <= 50) {
  shutDown();  
  }

  delay(100);
}

void turnDirection(int direction) {
  servo_drive.write(60);
  delay(10);
  servo_steer.write(direction);
  delay(3000);
  servo_steer.write(90);
  delay(10);
}

void shutDown() {
  servo_drive.write(90);
  servo_steer.write(90);
  delay(5000);
}


