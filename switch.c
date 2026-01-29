// Switch Statement:
/*
A switch statement in C is a multi-way branch statement. 
It provides a clean way to dispatch execution to different parts of code based on the value of a single expression (usually a variable).

Basic Syntax:
The switch statement compares the value of a variable against a list of case values.
 
switch (expression) {
    case constant1:
        // code to execute if expression == constant1
        break;
    case constant2:
        // code to execute if expression == constant2
        break;
    default:
        // code to execute if none of the cases match
}
*/

//Example of Switch Statement:
#include<stdio.h>
int main()
{
  int score;
  scanf("%d", score);
  switch(score/10)
  {
    case 9 :
            printf("Grade A");
            break;
    case 8:
            printf("Grade B");
            break;
    case 7:
            printf("Grade C");
            break;
    case 6:
            printf("Grade D");
            break;
    case 5:
            printf("Grade E");
            break;
    case 4:
            printf("Grade O");
            break;
    default:
            printf("Fail");
            break;
  }
  return 0;


}
