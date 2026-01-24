#include<stdio.h>
int main()
{
/*
Operators: Operators are used in programs to manipulates data and variables. They usually form a part of the mathematical or logical expressions.
C operators can be classified into a number of categories. They include:

1. Arithmetic Oprators
  These are used for basic mathematical calculations.
  Operator          Meaning               Example (a = 10, b =3)
  +                 Addition               13
  -                 Subtraction            7
  *                 Multiplication         30
  /                 Division               a/b=3 (integer division)
  %                 Modulus (Remainder)    a%b = 1

2. Relational Operators
  These compare two values and return either true (1) or false (0).
  They are essential for decision-making.
  ==: Equal to (e.g., 5 == 5 is true)
  !=: Not equal to
  > and <: Greater than and Less than
  >= and <=: Greater/Less than or equal to

3. Logical Operators
  Used to combine multiple conditions together.

  && (AND): True only if both conditions are true.
  || (OR): True if at least one condition is true.
   ! (NOT): Reverses the state (True becomes False).

4. Assignment Operators
Used to assign values to variables. C also features "shorthand" operators to make code more concise.
=: Simple assignment (x = 10)
+=: Add and assign (x += 5 is the same as x = x + 5)
-=, *=, /=: Perform the operation and then assign.

5. Increment and Decrement Operators
These are unique to languages like C and are used frequently in loops:
In case of Increment and Decrement Operators there are pre and post type of things like: pre increment or decrement,
and pre and post decrement.     

++: Increases value by 1.
--: Decreases value by 1.
Pre Increment: (++a): Increments the value first, then uses it in the expression.
Post Increment: (a++): Uses the current value in the expression first, then increments it.
Pre Decrement: (--a): Decrements first, then uses.
Post Decrement: (a--): Uses first, then decrements.


6. Conditional Operators
The conditional operator (? :) is the only operator in C that takes three operands. It is a shorthand version of an if-else statement.
Syntax: condition ? expression_if_true : expression_if_false; */
//Example:
int age = 20;
char* status = (age >= 18) ? "Adult" : "Minor";

//If the condition age >= 18 is true, the variable status gets the value "Adult". Otherwise, it gets "Minor".

/*
7. Bitwise Operators
  Bitwise Operators are used to manipulation of data at bit level. These Operators are used for testing the bits,
  or shifting them right or left. Bitwise operators may not be applied to float or double.
  
  Operator                              Meaning
  &                                     bitwise AND
  |                                     bitwise OR
  ^                                     bitwise exclusive OR
  <<                                    shift left
  >>                                    shift right    

8. Special Operators
C includes a few unique operators that handle memory and data types directly.

The size of Operator:
This returns the size of a data type or variable in bytes. It is crucial for memory management.
sizeof(int) usually returns 4.

The Comma Operator (,):
Used to link multiple expressions together. The expressions are evaluated from left to right,
 and the value of the rightmost expression is returned.
int x = (a = 5, b = 10, a + b); // x becomes 15.

Member Access Operators (. and ->):
Used to access elements within Structures or Unions.
. is used for direct access.
-> is used when accessing through a pointer.

Pointer Operators (& and *):
& (Address-of): Returns the memory address of a variable.
* (Dereference): Accesses the value stored at a specific memory address.

*/

}