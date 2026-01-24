/*
Input and Output (I/O) operations are the primary ways a C program communicates with the user. 
Since C doesn't have built-in I/O commands, it relies on the Standard Input Output library (stdio.h).

1. Output: printf()
The printf() function (Print Formatted) sends data to the screen. It can print plain text or the values of variables using Format Specifiers.

Syntax: printf("Format String", variable1, variable2);
*/
//Example:
#include<stdio.h>
int main()
{
    int score = 95;
    printf("Your score is %d", score);
    
/*
2. Input: scanf()
The scanf() function (Scan Formatted) reads data from the keyboard. It requires two things:
Format Specifier: To know what kind of data to expect (e.g., %d for an integer).
The Address Operator (&): To know where in memory to store that data.
Syntax: scanf("%d", &variableName);
*/
int age;
printf("Enter your age: ");
scanf("%d", &age);
return 0;
}
/*
3. Character-Specific I/O:
Sometimes you only need to handle a single character. C provides faster, specialized functions for this:
getchar(): Reads a single character from the keyboard.
putchar(): Displays a single character on the screen.

4. String I/O (Sentences)
While scanf() can read strings, it stops at the first space it encounters. To read a full sentence with spaces, we often use:

fgets(): Safely reads a line of text.

puts(): Prints a string and automatically adds a new line at the end.
*/