#include <iostream>

//--------------Exercise 1.7-------------//
void ExerciseOneSeven()
{
//	/*
//	wrong nested comment and cause the debugger incorrectly compile the program. /* */
//	*/
}

//--------------Exercise 1.8-------------//
void ExerciseOneEight()
{
	//There is no closing comment pairs
	std::cout << "/*"; 
	// There is no opening comment pairs
	std::cout << "*/"; 
	// doubled ending comment pairs result in opening comment pairs guess the first one from left is the closing.
//	std::cout << /* "*/" */; 
	// The middle comment pairs doesn't have closing comment pairs resulting to an error.
//	std::cout << /* "*/" /* "/*" */; 
}

// double strike comment in the code section to make sure when compile didn't gives any error.