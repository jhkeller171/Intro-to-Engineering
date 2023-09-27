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
  }
}