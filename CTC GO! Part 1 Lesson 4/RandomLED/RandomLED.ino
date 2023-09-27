/*
  CTC GO! CORE MODULE 
  LESSON 04 - Digital Inputs & Outputs

  This sketch is written to accompany Activity 3 in Lesson 04 of the CTC GO! core module
*/

// Initialising the pins and other variables.
int greenLED = 11;
int yellowLED = 12;
int redLED = 13;
int buttonState = 0;
int buttonPin = 2;
int del = 500;

int blinkingLED = 0;

void setup()
{
  // Setting up the pins as OUTPUTS.
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    // Randomly blink the LEDs
    blinkingLED = random(11, 14);

    if (blinkingLED == greenLED)
    {
      digitalWrite(greenLED, HIGH);
    }

    else if (blinkingLED == yellowLED)
    {
     digitalWrite(yellowLED, HIGH);
    }
    else if (blinkingLED == redLED)
    {
      digitalWrite(redLED, HIGH);
    }

    delay (del);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    delay(del);
  } else {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    delay(del);
    digitalWrite(greenLED, HIGH);
    delay(del);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    delay(del);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
    delay(del);
  }
}
