int loseLED = 13;
int winLED = 12;
int yellowLED_1 = 11; 
int yellowLED_2 = 10;
int yellowLED_3 = 9;

void setup() {
  pinMode(loseLED, OUTPUT);
  pinMode(winLED, OUTPUT);
  pinMode(yellowLED_1, OUTPUT);
  pinMode(yellowLED_2, OUTPUT);
  pinMode(yellowLED_3, OUTPUT);
}

void loop() {
  digitalWrite(loseLED, HIGH);
  digitalWrite(winLED, HIGH); 
  digitalWrite(yellowLED_1, HIGH);
  digitalWrite(yellowLED_2, HIGH);
  digitalWrite(yellowLED_3, HIGH);
  delay(1000);
  digitalWrite(loseLED, LOW);
  digitalWrite(winLED, LOW);
  digitalWrite(yellowLED_1, LOW);
  digitalWrite(yellowLED_2, LOW);
  digitalWrite(yellowLED_3, LOW);
  delay(1000);
}
