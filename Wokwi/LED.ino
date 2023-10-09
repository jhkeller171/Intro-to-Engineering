int LEDpin = 13;
int LEDpin2 = 12;
int LEDpin3 = 11;
int tailLight1 = 4;
int tailLight2 = 3;
int tailLight3 = 2;
int del = 1000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LEDpin, OUTPUT);
  pinMode(LEDpin2, OUTPUT);
  pinMode(LEDpin3, OUTPUT);
  pinMode(tailLight1, OUTPUT);
  pinMode(tailLight2, OUTPUT);
  pinMode(tailLight3, OUTPUT);
}

void loop() {
 //Builtin LED

 digitalWrite(LED_BUILTIN, HIGH);
 delay(del);
 digitalWrite(LED_BUILTIN, LOW);
 delay(del);

 //Flashing External
 
 digitalWrite(LEDpin, HIGH);
 delay(del);
 digitalWrite(LEDpin, LOW);
 delay(del);

 //Alternating External Flashing

 digitalWrite(LEDpin2, HIGH);
 digitalWrite(LEDpin3, LOW);
 delay(del);
 digitalWrite(LEDpin2, LOW);
 digitalWrite(LEDpin3, HIGH);
 delay(del);

 //Taillight

 digitalWrite(tailLight1, HIGH);
 delay(del);
 digitalWrite(tailLight2, HIGH);
 delay(del);
 digitalWrite(tailLight3, HIGH);
 delay(del);
 digitalWrite(tailLight1, LOW);
 digitalWrite(tailLight2, LOW);
 digitalWrite(tailLight3, LOW);
 delay(del);
}


