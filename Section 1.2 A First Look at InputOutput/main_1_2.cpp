#include<iostream>

//---------------Exercise 1.3------------//
void ExerciseOneThree()
{
	std::cout << "Hello, World" << std::endl;
}

//---------------Exercise 1.4------------//
void ExerciseOneFour()
{
	int a;
	int b;

	std::cin >> a >> b;
	std::cout << a * b << std::endl;
}

//---------------Exercise 1.5------------//
void ExerciseOneFive()
{
	int v1, v2;

	std::cin >> v1;
	std::cin >> v2;
	std::cout << "The sum of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 + v2;
	std::cout << std::endl;
}

//---------------Exercise 1.6------------//
void ExerciseOneSix()
{
	//std::cout << "The sum of " << v1; << " and " << v2; << " is " << v1 + v2 << std::endl;
	/*
	This statement is illegal because we add semicolon which mean the end of the code. That crash the program,
	to fix it there is 2 way, either remove the semicolon or rewrite cout infront of the missing statement.
	*/
}