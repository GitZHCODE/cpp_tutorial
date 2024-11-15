#include <stdio.h>
#include <iostream>
#include <vector>

#include "Factorial.h"

//Function definition
int square(int number)
{
    return number * number;
}

//Forward declaring a function
int sum(const std::vector<int>& numbers);

//Function definition
int sum(const std::vector<int>& numbers)
{
    int out = 0;
    auto it = numbers.begin();
    while (it != numbers.end())
    {
        out += *it++;
    }
    return out;
}

void hello()
{
    printf("Hello\n");
}

int main()
{
#ifdef _DEBUG_

    hello();

    int num1 = 5;
    //Passing parameters by value
    std::cout << square(num1) << std::endl;

    std::vector<int> nums = {1, 2, 3, 4, 5};
    //Passing parameters by reference
    std::cout << sum(nums) << std::endl;

    std::cout << factorial(5) << std::endl;

#endif //_DEBUG_

#ifdef _EXERCISE_

    //Write a function that compares the sums of two std::vector<int>
    // and returns the vector with the largest sum

    std::vector<int> list_1 = {10, 3, 15, 7};
    std::vector<int> list_2 = {21, 2, 1, 19};

#endif //_EXERCISE_
}
