int pot = A1; //Potentiometer
int sense = A0; //Ultrasonic Sensor
int trans = A2; //Phototransistor

int potLED = 12; //Potentiometer LED
int senseLED = 9; //Ultrasonic Senor LED
int transLED = 13; //Phototransistor LED

void setup() {
  pinMode(potLED, OUTPUT);
  pinMode(senseLED, OUTPUT);
  pinMode(transLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  potLoop();
  senseLoop();
  transLoop();
}

void senseLoop(){ //Defines Ultra Loop
  digitalWrite(senseLED, HIGH);
  delay(analogRead(sense));
  Serial.println("Ultraosnic Sensor: " + analogRead(sense));
  digitalWrite(senseLED, LOW);
  delay(analogRead(sense));
}

void transLoop(){ //Defines Phototransistor Loop
  digitalWrite(transLED, HIGH);
  delay(analogRead(trans));
  digitalWrite(transLED, LOW);
  delay(analogRead(trans));
}

void potLoop(){ //Defines Potentiamoetter Loop
  digitalWrite(potLED, HIGH);
  delay(analogRead(pot));
  digitalWrite(potLED, LOW);
  delay(analogRead(pot));
}

