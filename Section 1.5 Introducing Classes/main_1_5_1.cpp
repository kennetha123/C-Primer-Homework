#include <iostream>
#include "Sales_item.h"

//-----------------Exercise 1.20------------------//
void ExerciseOneTwenty() {
    Sales_item item;
    while (std::cin >> item)
        std::cout << item << std::endl;
}

//-----------------Exercise 1.21------------------//
void ExerciseOneTwentyOne()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
}

//-----------------Exercise 1.22------------------//
void ExerciseOneTwentyTwo()
{
    Sales_item total, item;
    if (std::cin >> total) {
        while (std::cin >> item)
            total += item;
        std::cout << total << std::endl;
    }
}