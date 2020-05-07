#include <iostream>

//-----------------Exercise 1.16------------------//
void ExerciseOneSixteen()
{
	int a = 0;
	int howManyNumber = 0;
	int result = 0;

	std::cin >> howManyNumber;
	while (a < howManyNumber)
	{
		int add;
		std::cin >> add;
		result += add;
		++a;
	}

	std::cout << "Result : " << result << std::endl;
}