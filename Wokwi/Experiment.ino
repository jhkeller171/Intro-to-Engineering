int buttonPin = 2;
int LEDpin1 = 13;
int LEDpin2 = 12;
int LEDpin3 = 11;
int buttonState = 0;
int dt = 250;


void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(LEDpin1, OUTPUT);
  pinMode(LEDpin2, OUTPUT);
  pinMode(LEDpin3, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    digitalWrite(random(11,14),HIGH);
    delay(dt);
  } else {
    digitalWrite(LEDpin1, HIGH);
    delay(dt);
    digitalWrite(LEDpin2, HIGH);
    delay(dt);
    digitalWrite(LEDpin3, HIGH);
    delay(dt);
  }
  digitalWrite(LEDpin1, LOW);
  digitalWrite(LEDpin2, LOW);
  digitalWrite(LEDpin3, LOW);
  delay(dt);
}
