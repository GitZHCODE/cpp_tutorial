#include <iostream>

//LNK2019
int bar();

int main()
{
#ifdef _DEBUG_

    std::cout << bar() << std::endl;
    
#endif //_DEBUG_

#ifdef _EXERCISE_

#endif //_EXERCISE_
}
