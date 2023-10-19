int sliderPin1 = 3;
int sliderPin2 = 2;
int ledPin1 = 9;
int ledPin2 = 10;
int slider1State = 0;
int slider2State = 0;

void setup() {
  pinMode(sliderPin1, INPUT_PULLUP);
  pinMode(sliderPin2, INPUT_PULLUP);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  slider1State = digitalRead(sliderPin1);
  slider2State = digitalRead(sliderPin2);

  if (slider1State == 1 && slider2State == 1){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay(250);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    delay(250);
  } else if (slider1State == 1 || slider2State == 1){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(250);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(250);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }
}
