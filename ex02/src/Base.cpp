#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

Base::Base()
{
    std::cout << "Default Base constructor!" << std::endl;
}

Base::~Base()
{
    std::cout << "Base destrcutor!" << std::endl;
}

Base*   Base::generate( void )
{
    //randomlu instantiates A/B/C returns instance as a Base pointer
    std::srand( std::time( nullptr ) ); // randomizer
    int r = std::rand() % 3;
    switch ( r )
    {
        case 0: std::cout << "A"; break;
        case 1: std::cout << "B"; break;
        case 2: std::cout << "C"; break;
    }
}

void    Base::identify( Base* p )
{
    //prints actual type of object pointed to by p
}

void    Base::identify( Base& p )
{
    //prints actual type of object referenced by p ------ using pointer inside this function is forbidden
}