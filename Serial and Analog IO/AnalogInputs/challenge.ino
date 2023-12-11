int pot = A1; //Potentiometer
int sense = A0; //Ultrasonic Sensor
int trans = A2; //Phototransistor
int choice;
int blinks;

int potLED = 12; //Potentiometer LED
int senseLED = 9; //Ultrasonic Senor LED
int transLED = 13; //Phototransistor LED
int transnum = 0; //Delay of the Phototransistor
int potnuma = 0; //Delay of the potentiometer times 1
int potnumb = 0; //Delay of the potentiometer times 2 (what is used)
int sensenum = 0; //Delay of the ultrasonic sensor

void setup() {
  pinMode(potLED, OUTPUT);
  pinMode(senseLED, OUTPUT);
  pinMode(transLED, OUTPUT);

  Serial.begin(9600);
  Serial.println( );
  Serial.println("1. Phototransistor");
Serial.println("2. Potentiometer");
Serial.println("3. Ultrasonic Sensor");
Serial.println(" ");
}

void loop() {
  if (Serial.available() > 0 && choice == NULL){
    choice = Serial.parseInt();
    Serial.println("How Many Blinks?");
    delay(3000);
    }
  if (choice!= NULL && Serial.available()>0){
    blinks = Serial.parseInt();
  }
    if (choice == 1){
      transLoop(blinks);
    } else if (choice == 2){
      potLoop(blinks);
    } else if (choice == 3){
      senseLoop(blinks);
    }
    choice = NULL;
    blinks = NULL;
  }

void senseLoop(int blinks){ //Defines Ultrasonic Sensor Loop
int i =0;
while (i<blinks){
  sensenum = analogRead(sense);
  Serial.print("Ultrasonic Sensor: ");
  Serial.println(sensenum);
  Serial.println(" ");
  digitalWrite(senseLED, HIGH);
  delay(sensenum);
  digitalWrite(senseLED, LOW);
  delay(sensenum);
  i++;
}
Serial.println(" ");
Serial.println("1. Phototransistor");
Serial.println("2. Potentiometer");
Serial.println("3. Ultrasonic Sensor");
Serial.println(" ");
}



void transLoop(int blinks){ //Defines Phototransistor Loop
int i =0;
while (i<blinks){
  transnum = analogRead(trans);
  Serial.print("Phototransistor: ");
  Serial.println(transnum);
  Serial.println(" ");
  digitalWrite(transLED, HIGH);
  delay(transnum);
  digitalWrite(transLED, LOW);
  delay(transnum);
  i++;
}
Serial.println(" ");
Serial.println("1. Phototransistor");
Serial.println("2. Potentiometer");
Serial.println("3. Ultrasonic Sensor");
Serial.println(" ");
}

void potLoop(int blinks){ //Defines Potentiometer Loop
int i =0;
while (i<blinks){
  potnuma = analogRead(pot);
  int potnumb = potnuma * 2; //x2 for the potentiometer to increase its delay 
  Serial.print("Potentiometer *1: ");
  Serial.println(potnuma);
  Serial.print("Potentiometer *2: ");
  Serial.println(potnumb);
  Serial.println(" ");
  digitalWrite(potLED, HIGH);
  delay(potnumb);
  digitalWrite(potLED, LOW);
  delay(potnumb);
  i++;
}
Serial.println(" ");
Serial.println("1. Phototransistor");
Serial.println("2. Potentiometer");
Serial.println("3. Ultrasonic Sensor");
Serial.println(" ");
}
