#include <iostream>

//-----------------Exercise 1.17------------------//
/*
it will run and keep prompting user for an input.
*/

//-----------------Exercise 1.18------------------//
void ExerciseOneEighteen()
{
	// currVal is the number we're counting; we'll read new values into val
	int currVal = 0, val = 0;
	// read first number and ensure that we have data to process
	if (std::cin >> currVal) {
		int cnt = 1; // store the count for the current value we're processing
		while (std::cin >> val) { // read the remaining numbers
			if (val == currVal) // if the values are the same
				++cnt; // add 1 to cnt
			else { // otherwise, print the count for the previous value
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val; // remember the new value
				cnt = 1; // reset the counter
			}
		} // while loop ends here
		// remember to print the count for the last value in the file
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}
}

//-----------------Exercise 1.19------------------//
void ExerciseOneNineteen()
{
	int a;
	int b;

	std::cin >> a >> b;

	if (a > b)
	{
		while (a != b)
		{
			std::cout << b << std::endl;
			++b;
		}
	}
	else
	{
		while (b != a)
		{
			std::cout << a << std::endl;
			++a;
		}
	}
}