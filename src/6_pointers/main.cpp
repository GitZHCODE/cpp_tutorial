#include <iostream>

struct test_struct
{
    int test_int;
};

int main()
{
#ifdef _DEBUG_

    //Stack allocation
    int number;

    //Heap allocation
    int* number_ptr = new int(5);

    //Dereference pointer
    number = *number_ptr;

    test_struct* struct_ptr = new test_struct {8};

    //Arrow opertor equivalent to (*struct_ptr).test_int
    number = struct_ptr->test_int;

    //Creating a reference to a variable
    int* number_ref = &number;

#endif //_DEBUG_

#ifdef _EXERCISE_

#endif //_EXERCISE_
}
