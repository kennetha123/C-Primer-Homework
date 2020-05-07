#include <iostream>

//-----------------Exercise 1.12------------------//
/*
int sum = 0;
for (int i = -100; i <= 100; ++i)
 sum += i;

 the first line declaring variable called sum that has 0 in it.
 then the loop started, first thing it will check the loop variable definition.
 it started with -100 and check if the i is still under / equals 100, then it run the block of program inside it.
 after that, the i value increased.
 The last line is doing addition with i.
*/

//-----------------Exercise 1.13------------------//
void ExerciseOneThirteen()
{
    int sum = 0;
    for (int val = 1; val <= 10; val++)
    {
        sum += val;
    }
     std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
}

//-----------------Exercise 1.14------------------//
/*
while loops have advantage not binded with number values, it can be use bool
to compare some situation to see can it go through when some condition (not using number) aren't reached.
but while itself are prone to infinite loop, since the writing is bit unclear, if it's compared to for loops.
The for loop itself have advantage to not defining a condition outside it scope, so it can have local variable
under the loop itself.
*/

//-----------------Exercise 1.15------------------//
/*
// error: first output operator is missing
std::cout "Hello World" << std::endl;
// error: missing quotes around string literal
std::cout << Hello World << std::endl;
// error: missing a semicolon, after endl
std::cout << "Hello World" << std::endl
*/