/*
  CTC GO! CORE MODULE 
  LESSON 04 - Digital Inputs & Outputs

  This sketch is written to accompany Activity 2 in Lesson 04 of the CTC GO! core module
*/

int button_pin = 2;
int button_state = 0; 
int LED_pin = 13;
int del = 1000;

void setup() 
{
  // Setting up the pins as OUTPUTS & INPUTS.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(button_pin,INPUT);
  pinMode(LED_pin,OUTPUT);
}

void loop()
{
  button_state = digitalRead(button_pin);

  // if the button is presed, blink the LEDS
  if (button_state == HIGH)       
  {
    digitalWrite(LED_pin, LOW);
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(del);                       
    digitalWrite(LED_BUILTIN, LOW);    
    delay(del);                       
  }
  else                         
  {
    digitalWrite(LED_BUILTIN, LOW); 
    digitalWrite(LED_pin, HIGH);  
    delay(del);                       
    digitalWrite(LED_pin, LOW);    
    delay(del);  
  }
}
