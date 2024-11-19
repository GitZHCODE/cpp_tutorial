#include <stdio.h>
#include <vector>
#include <array>
#include <string>
#include <map>

int main()
{
#ifdef _DEBUG_

    //######-VARIABLES-######

    //Declaring and intialising a float
    float value = 0.1f;
    printf("Value: %.2f\n", value);
    
    //Changing the value
    value = 5.0f;
    printf("Value: %.2f\n", value);

    //Declaring a C style array
    int numbers[3] = {1, 2, 3};

    //A constant variable
    const std::string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    //######-STL-CONTAINERS-######
    // < > syntax specifies the template arguments

    std::array<int, 2> indicies = {45, 47}; //Array

    std::vector<double> doubles {1.0, 2.0, 3.0}; //Vector

    std::map<std::string, float> dictionary = {{"code" , 5.5f}}; //Map

    //######-LOOPS-######

    //While Loop
    while (value != 0.0f) {
        printf("%.2f\n", value-=1.0f);
    }

    // For Loop
    int start = 6;
    int copy = start;

    for(int i = 1; i < start; ++i)
    {
        copy *= start - i;
    }

    printf("Factorial of %d is %d\n", start, copy);

    //foreach
    double sum = 0.0;

    for(auto val : doubles)
    {
        sum+=val;
    }
    printf("Sum of doubles: %.2f", sum);

    //Break and continue
    int count = 0;
    while(true) //infinite loop
    {
        if(count % 2 == 0)
            continue; //skips to the next iteration of the loop.
        if(count == 7)
            break; //breaks out of the loop.
        printf("Count is odd: %d", count);
    }

#endif //_DEBUG_

#ifdef _EXERCISE_

    std::vector<int> integers {1, 2, 3, 4, 5, 6};
    //Write a loop that prints out ^these numbers in reverse order.

#endif //_EXERCISE_
}

