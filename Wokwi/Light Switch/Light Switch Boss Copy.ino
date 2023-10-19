int LEDpin = 13;
int buttonPin1 = 12;
int buttonPin2 = 11;
int buttonState1 = 0;
int buttonState2 = 0;
int LEDstate = 0;
int dt = 150;


void setup() {
  pinMode(LEDpin, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
buttonState1 = digitalRead(buttonPin1);
buttonState2 = digitalRead(buttonPin2);

if (buttonState1 == 1){
  if (LEDstate == 1){
    LEDstate = 0;
  } else {
    LEDstate = 1;
  }
  delay(dt);
  if (LEDstate == 1){
    digitalWrite(LEDpin, HIGH);
  } else {
    digitalWrite(LEDpin, LOW);
  }
  delay(dt);
}
if (buttonState2 == 1){
  if (LEDstate == 1){
    LEDstate = 0;
  } else {
    LEDstate = 1;
  }
  delay(dt);
  if (LEDstate == 1){
    digitalWrite(LEDpin, HIGH);
  } else {
    digitalWrite(LEDpin, LOW);
  }
  delay(dt);
}
}
