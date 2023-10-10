int LEDpin = 13;
int buttonPin = 12;
int buttonState = 0;
int LEDstate = 0;


void setup() {
  pinMode(LEDpin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == 1){
    if (LEDstate == 1){
      LEDstate = 0;
      digitalWrite(LEDpin, LOW);
    } else {
      LEDstate = 1;
      digitalWrite(LEDpin, HIGH);
    }
  }
  delay(150);
}
