#include <iostream>
#include <vector>

#include "sample.h"

int double_number(int number);
void print_vector(std::vector<int>& vec);

int main()
{
    
    auto numbers = std::vector<int>{6, 7 ,3 ,2, 11};

    print_vector(numbers);

    sort_vector(numbers);

    print_vector(numbers);

    //##########################

    double_number(5);
}

int double_number(int number)
{
    return double_number(number);
}

void print_vector(std::vector<int>& vec)
{
    for(int num : vec)
    {
        std::cout << num << " ";
    }

    std::cout << std::endl;
}

