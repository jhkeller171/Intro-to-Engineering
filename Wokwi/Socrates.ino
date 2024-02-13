/*
Socrates once said a man's wife should be half his age plus 7
write a function called "Socrates" to compute this
*/

void setup() {
 Serial.begin(9600);

}

void loop() {
  int wifeAge = Socrates(35);
  Serial.println(wifeAge);
}

int Socrates(int manAge){
  return (manAge/2) + 7;
}
