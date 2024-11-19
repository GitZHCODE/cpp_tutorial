#include "ExampleClass.h"

namespace example
{

    //Constructor implementation
    ExampleClass::ExampleClass()
    {
        private_int = 5;
    }

    //Destructor implementation
    ExampleClass::~ExampleClass()
    {
    }

    int ExampleClass::public_method()
    {
        return private_int;
    }

    void ExampleClass::private_method()
    {
    }
}
