#include<stdio.h>
int main()
{
/*Identifiers allow us to name you give to entities like variables,
functions, structures, or arrays. Think of it as a label that helps the compiler identify a specific memory location or a block of code. 

You cannot use C Keywords (reserved words) as identifiers.
Keywords are words that already have a special meaning to the compiler, such as int, return, if, or while.

*/
int first_n, second_n, result;
printf("Enter the first number:");
scanf("%d", &first_n);
printf("Enter the second number:");
scanf("%d", &second_n);
result = first_n+second_n;
printf("The Output of the additon is: %d", result);
return 0;

}