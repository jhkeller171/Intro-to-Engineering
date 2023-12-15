
/*
  CTC GO! CORE MODULE 
  LESSON 08 - Analog Outputs

  This sketch is written to accompany Activity 3 in Lesson 08 of the CTC GO! core module
*/


  int button = 13;
  int piezo = 8;
  int LED = 5;
  int USsensor = A0;
  
  int C_note = 262;
  int B_note = 493;
  
  int buttValue = 0;
  int value = 0;
  int distance = 0;
  
  int alarm = 0;
  int trigger = 500;
  int userNum;
  int keyNum = 123;
  
  void setup()
  {
    pinMode(button, INPUT);
    pinMode(piezo, OUTPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
  }
  
  void loop()
  {
    buttValue = digitalRead(button);
    // reading button state and distance
    if (Serial.available()>0){
      userNum = Serial.parseInt();
    }

    value = analogRead(USsensor);
    distance = value * 3;
    if (buttValue == HIGH && userNum == keyNum)
    {
      alarm = 0;
      Serial.println("Password Accepted, Alarm Disabled");
      noTone(piezo);
      userNum = 999;
    } else if (userNum == 999){
    

    } else if (buttValue == HIGH && userNum != keyNum){
      Serial.println("Wrong Key!");
      userNum = 999;
    }
    // setting the trigger distance
    if (distance < trigger)
    {
      alarm = 1;
    }
    // deactivating the alarm

    // if the alarm is triggered
    if (alarm == 1)
    { 
      for (int n = 255; n < 510; n++)
      {
        tone (piezo, n);
        analogWrite(LED, n-255);
        delay(5);
      }

       
    
    

      for (int n = 510; n > 255; n--)
      {
        tone (piezo, n);
        analogWrite(LED, n-255);
        delay(5);
      }
      
    
    }

    //if the alarm is not triggered
    else
    {
      digitalWrite(LED, LOW);
      noTone(piezo);    //stop playing sound
    }
  }
