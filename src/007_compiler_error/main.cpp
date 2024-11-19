#include <iostream>

class Animal
{
    Animal(const char* _name)
    {
        name = _name;
    }

    const char* name;
};

double triple(int num)
{
    return 3 * num;
}

int main()
{
#ifdef _DEBUG_

    Animal cow = Animal("cow");

    Animal goat = Animal(5);

#endif //_DEBUG_

#ifdef _EXERCISE_

#endif //_EXERCISE_
}
