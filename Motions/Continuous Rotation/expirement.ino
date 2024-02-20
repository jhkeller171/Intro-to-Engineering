/*

We can reduce the amount of code we have used to create our speed control. As an experiment for this activity, let’s make our program shorter. To do this, we will need to map the speed of the servo in function of the distance we are measuring with the distance sensor.

We only need to use the if/else statement to identify when the servo has to move forwards or backwards and when it is in the targeted position.

*/


/*
  CTC GO! MOTION 
  LESSON 03 - Continuous Rotation

  This sketch is written to accompany activity 3 of Lesson 3
*/

#include <Servo.h>

Servo servo_Cont;

int USsensor = A0;

int USvalue = 0;
int distance = 0;
int speed = 0;

void setup()
{
  servo_Cont.attach(9);
  Serial.begin(9600);
}

void loop()
{
  USvalue = analogRead(USsensor);
  distance = map(USvalue, 0, 1023, 0, 3000);

  Serial.print(" Distance: ");
  Serial.println(distance);

  if (distance < 150){
    servo_Cont.write(map(distance,0,150,135,90));
    Serial.print("Object too close to the sensor");
  } else if (distance >= 150 && distance <= 200){
    servo_Cont.write(90);
    Serial.print("Object in the targeted position");
  } else if (distance > 200){
    servo_Cont.write(map(distance,200,3000,0,89));
    Serial.print("Object too far away");
  }
  delay(250);
}
