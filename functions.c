// Functions in C Programming Language:
/*
In C programming, a function is a self-contained block of code that performs a specific task. 
Every C program muA function is a block of code that performs a particular task and can be used whenever we need that task.
*/
#include <stdio.h>
void hello() /*void is the retuen type. It means it doesn't return any value like int main().
hello with the void is the function name.
() These are called parentheses. They can contain information that we give to the function, called parameters.
*/
{
    /*In general we know if we have to print something we have to use printf, but let say if i want print 10 times or more than 10,
    Then we have to use functions in case of that*/

    printf("Hello\n");
}
int main() 
{
    hello();
    hello();
    hello();
    hello();
    return 0;
}


