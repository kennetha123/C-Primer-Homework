#include <iostream>

//-----------------Exercise 1.9------------------//
void ExerciseOneNine()
{
	int a(50);
	while (a < 101)
	{
		std::cout << a << std::endl;
		++a;
	}
}

//-----------------Exercise 1.10------------------//
void ExerciseOneTen()
{
	int a(10);
	while (a > -1)
	{
		std::cout << a << std::endl;
		--a;
	}
}

//-----------------Exercise 1.11------------------//
void ExerciseOneEleven()
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