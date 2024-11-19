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

    //Declaration of a C-style array
    int array_of_ints[] = {1, 2, 3, 4, 5};

    //The variable for a C-style array is just
    //the pointer of the first element in the array.
    int* first_element_ptr = array_of_ints;

#endif //_DEBUG_

#ifdef _EXERCISE_

    int array_of_numbers[] = {22, 84, -20, 51, 12};

    //Write a function that takes a pointer to an array as input
    //and returns a pointer to the largest value.

#endif //_EXERCISE_
}
