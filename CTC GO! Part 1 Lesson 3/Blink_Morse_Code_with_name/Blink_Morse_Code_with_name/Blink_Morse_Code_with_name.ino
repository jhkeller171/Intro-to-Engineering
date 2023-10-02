/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
/*  int count = 3;
  while (count > 0){
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(200);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);  
    count = count-1;   
  }           
  delay(400);   
  count = 3;
  while (count>0){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(400);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);  
    count = count-1;
  }
  delay(400);
  count = 3;
  while (count>0){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);  
    count = count-1;
  }
  delay(2000);


digitalWrite(LED_BUILTIN, HIGH);
delay(5000);
digitalWrite(LED_BUILTIN,LOW);
//NAME PART
*/




  //J
  delay(1000);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  int count = 3;
  while (count>0){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(600);
    digitalWrite(LED_BUILTIN,LOW);
    count = count-1;
  }
  //A
  delay(1000);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN,LOW);
  delay(300);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
  //M
  digitalWrite(LED_BUILTIN,HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN,LOW);
  delay(600);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN,LOW);
  //E
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN,LOW);
  //S
  delay(1000);
  count = 3;
  while (count>0){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(300);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);
    delay(300);  
    count = count-1;
  }
}
