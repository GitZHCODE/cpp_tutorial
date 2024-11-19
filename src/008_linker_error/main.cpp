#include <iostream>
#include "example.h"

//LNK2019
int bar();

int main()
{
#ifdef _DEBUG_

    std::cout << bar() << std::endl;

    GreatDay("<your name>");
    
#endif //_DEBUG_

#ifdef _EXERCISE_

#endif //_EXERCISE_
}
