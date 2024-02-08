/*
To practice more on how to create functions, write a program including a simple function. The task is to make our classmates do some sports between classes. The function should tell the user what exercise and how many repeats they need to do and count the reps from top to bottom.

Write a function named sport that: won’t return any value once its execution is done (void type); takes two arguments: type of exercise and number of reps; prints to the Serial Monitor:

Once: Time to move! Do reps + exercise;
Every second: The amount of reps left; is called from the loop().
*/


void setup() {
  Serial.begin(9600);
}

void loop() {
  sport("Bench Press", 10);
  delay(5000); 
}

void sport(String exercise, int reps) {
  Serial.print("Time to move! Do ");
  Serial.print(reps);
  Serial.print(" ");
  Serial.print(exercise);
  Serial.println();
  
  for (int i=reps;i>0;i--) {
    Serial.print("Reps left: ");
    Serial.println(i);
    delay(1000); 
  }
}
