/*

As a challenge for this lesson, let’s merge both parts of the production line we have created separately. 
In the previous lesson, we created a gripper that will grab an object, and in this lesson we have created a belt 
that will move an object to the point at which a gripper can take it.

*/

/*
  CTC GO! MOTION 
  LESSON 03 - Continuous Rotation

  This sketch is written to accompany activity 3 of Lesson 3
*/

#include <Servo.h>

Servo servo_Cont;
Servo servo_Standard;

int USsensor = A0;

int USvalue = 0;
int distance = 0;
int speed = 0;
int piezo = 3;
int closed_tone = 250;
int open_tone = 1500;

bool open = true;
bool closed = false;

void setup()
{
  servo_Cont.attach(6);
  servo_Standard.attach(9);
  Serial.begin(9600);
}

void loop()
{
  USvalue = analogRead(USsensor);
  distance = map(USvalue, 0, 1023, 0, 3000);

  Serial.print(" Distance: ");
  Serial.println(distance);

  if (distance < 150){
    servo_Cont.write(map(distance,0,150,135,150));
    servo_Standard.write(30);
    sounds(open);
  } else if (distance >= 150 && distance <= 200){
    servo_Cont.write(90);
    servo_Standard.write(125);
    sounds(closed);
  } else if (distance > 200){
    servo_Cont.write(map(distance,200,2000,80,0));
    servo_Standard.write(30);
    sounds(open);
  }

  
  delay(250);
}

void sounds(bool state) {
  static bool prev_state = open;

  if (state != prev_state)
  {
    if (state == true)
    {
      for (int i = 0; i < 2; i++)
      {
        tone(piezo, open_tone);
        delay(50);
        noTone(piezo);
        delay(50);
      }
    }
    else
    {
      for (int i = 0; i < 2; i++)
      {
        tone(piezo, closed_tone);
        delay(50);
        noTone(piezo);
        delay(50);
      }
    }
  }
  else
  {
    noTone(piezo);
  }
  prev_state = state;
}

