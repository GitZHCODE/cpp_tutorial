#include "ExampleClass.h"
#include <iostream>

struct Data
{
    //By default all members of a struct a public

    //Declaring fields in a struct
    int field1;
    float field2;
    double field3;

    //Implementing a method on a struct
    void print()
    {
        std::cout << "Field 1: " << field1 << "\nField 2: " << field2 <<"\nField 3: " << field3 << std::endl;
    }
};

int main()
{
#ifdef _DEBUG_
    using namespace example;

    //Initialising a struct
    Data data {1, 2.0f, 3.0};
    //Calling a strut's method
    data.print();

    //Initialising a class by explicitly calling the constructor.
    ExampleClass example_1 = ExampleClass();

    //Initialising a class (the constructor gets called implicitly)
    ExampleClass example_2;

#endif //_DEBUG_

#ifdef _EXERCISE_
    //Implement a class called Hello so the code below produces
    //the following output.
    //"Hello"
    //"Goodbye"

    Hello greetings;

#endif //_EXERCISE_
}
