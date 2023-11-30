void setup() {
 Serial.begin(9600);
 Serial.println("For Loops #1");
 int n = 5;
 for (int i = 0; i<n; i++){
  Serial.print(i);
  Serial.print(" ");
  Serial.println(n);
 }

 Serial.println("For Loops #2");
 int counter = 0;
 for (int i = 0; i<=10;i++){
  if (i==2){
    counter += 1;
  }
  if (i==5){
    counter += 3;
  }
  if (i==10){
    counter += 4;
  }
 }
 Serial.println(counter);

 Serial.println("For Loops #3");
char myWord[] = {"Simple"};
char guessingWord[sizeof(myWord)];
for (int i = 0 ; i<sizeof(myWord)-1; i++){
  if (i==2||i==4){
    guessingWord[i] = "*";
  } else {
    guessingWord[i]=myWord[i];
  }
  Serial.print(guessingWord[i]);
}
Serial.println();
Serial.println(myWord);
}


void loop() {
 
}
