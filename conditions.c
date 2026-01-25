// Decision Making and Branching in C Programming.
/*
Decision making in C allows a program to execute different blocks of code depending on whether a condition is true or false. 
Without this, your code would just run in a straight line from top to bottom every single time.

1. The if Statement:
The simplest form of branching. The code inside the braces runs only if the condition is true.

2. The if-else Statement
This provides an "Option B." If the if condition fails, the else block runs.

*/
// Example of If statement:
#include<stdio.h>
int main()
{
  int score;
  printf("Enter your score: ");
  scanf("%d", &score);
  
  if (score > 50) {
    printf("You passed!");
}
//Example of If-else statement:
  else {
    printf("Failed");
}
  return 0;

}