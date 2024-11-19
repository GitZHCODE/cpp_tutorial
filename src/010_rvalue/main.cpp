#include <iostream>
#include <string>

void* operator new(size_t size)
{
    std::cout << "Allocataing " << size << " bytes\n";

    return malloc(size);
}

void* operator new[](size_t size)
{
    std::cout << "Allocataing " << size << " bytes\n";

    return malloc(size);
}

void operator delete(void* mem)
{
    std::cout << "Deallocating\n";
    free(mem);
}

class Vegetable
{
public:
     //Vegetable(std::string&& _name)
     //{
     //    name = std::move(_name);
     //}

    Vegetable(std::string _name)
    {
        printf("Vegetable constructor\n");
        name = _name;
    }

private:
	std::string name;
};

int main()
{
#ifdef _DEBUG_

    Vegetable carrot = Vegetable("a;sdlkhaglhdgl;kajsdfhgl;akfjhglkusdfjghaldsldsdflkgjhsdflkgjhsdflkgjhsdfdflkgjhsdflkgjhsdg");

#endif //_DEBUG_

#ifdef _EXERCISE_

#endif //_EXERCISE_
}
