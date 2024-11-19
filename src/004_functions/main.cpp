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

//void is a return type for when the function returns nothing
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

    //Implement the functions setup and update, so the 
    //console output looks like:
    // 
    //"Initial setup"
    //"Update 1"
    //"Update 2"
    //"Update 3"
    //"Update 4"

    bool g_exit = false;
    
    setup();

    while(!g_exit)
    {
        update(g_exit);
    }

#endif //_EXERCISE_
}
