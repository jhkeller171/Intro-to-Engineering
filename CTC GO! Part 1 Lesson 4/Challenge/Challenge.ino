int buttonPin1 = 2;
int buttonPin2 = 3;
int LEDpin = 13;
int buttonState1 = 0;
int buttonState2 = 0;
bool LEDon = false;

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  delay(500);
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  if (buttonState1 == 1 || buttonState2 == 1){
    if (LEDon == true){
      digitalWrite(LEDpin, LOW);
      LEDon = false;
    } else {
      digitalWrite(LEDpin, HIGH);
      LEDon = true;
    }
  }
}
