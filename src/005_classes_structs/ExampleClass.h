#pragma once

namespace example
{
    class ExampleClass
    {
        //By default all members of a class are private

    public:  //Public access modifier

        //Constructor declaration
        ExampleClass();

        //Destructor declaration
        ~ExampleClass();

        int public_method();

        int public_int = 0;

    private: //Private access modifier
        void private_method();

        int private_int = 0;
    };
}
