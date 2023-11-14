int buttonState1 = 1;
int buttonState2 = 2;
int greenLED = 3;
int redLED = 2;
boolean waiting = false;
boolean water = false;
boolean soda = false;
boolean NA = false;

void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  buttonState1 = digitalRead(13);
  buttonState2 = digitalRead(12);
  if (buttonState1 == 1 && buttonState2 ==1 && NA == false){
    Serial.println("Product Not Available");
    digitalWrite(redLED, HIGH);
    delay(1000);
    digitalWrite(redLED, LOW);
    waiting = true;
    soda = false;
    water = false;
    NA = true;
  } else if (buttonState1 == 1 && buttonState2 == 0 && soda == false ){
    Serial.println("Vending Soda");
    digitalWrite(greenLED, HIGH);
    delay(1000);
    digitalWrite(greenLED, LOW);
    soda = true;
    water = false;
    waiting = false;
  } else if (buttonState2 == 1 && buttonState1 == 0 && water == false){
    Serial.println("Vending Water");
    digitalWrite(greenLED, HIGH);
    delay(1000);
    digitalWrite(greenLED, LOW);
    waiting = false;
    soda = false;
    water = true;
  } else if (buttonState1 == 0 && buttonState2 ==0){
    delay(300);
    if (waiting == false){
      Serial.println("Waiting...");
      waiting = true;
      soda= false;
      water = false;
      NA = false;
    }
  }
}
