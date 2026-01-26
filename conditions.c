// Decision Making and Branching in C Programming.
/*
Decision making in C allows a program to execute different blocks of code depending on whether a condition is true or false. 
Without this, your code would just run in a straight line from top to bottom every single time.

1. The if Statement:
The simplest form of branching. The code inside the braces runs only if the condition is true.

2. The if-else Statement
This provides an "Option B." If the if condition fails, the else block runs.

3. The else if Ladder
When you have multiple specific conditions to check, you use a ladder. 
The program checks them one by one and stops at the first true one.
*/
// Example of If statement:
#include<stdio.h>
int main()
{
  int score;
  printf("Enter your score: ");
  scanf("%d", &score);
  
  // Example of If-statement:
  if (score >= 90) {
    printf("You Recieved A Grade.");
}
  // Example of else if statement:
  else if (score>=40) {
    printf("You Passed.");
}

// Example of If-else statement:
  else (score<=39) {
    printf("Failed");
}
  return 0;

}