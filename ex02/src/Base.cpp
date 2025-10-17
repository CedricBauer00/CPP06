#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

Base::Base()
{
    std::cout << "\033[32mDefault Base constructor!\033[0m" << std::endl;
}

Base::~Base()
{
    std::cout << "\033[31mBase destrcutor!\033[0m" << std::endl;
}

Base*   Base::generate( void )
{
    //randomly instantiates A/B/C returns instance as a Base pointer
    std::srand( std::time( nullptr ) ); // randomizer
    int r = std::rand() % 3;
    switch ( r )
    {
        case 0: std::cout << "\033[34mCreated A\033[0m" << std::endl; return ( new A() );
        case 1: std::cout << "\033[34mCreated B\033[0m" << std::endl; return ( new B() );
        case 2: std::cout << "\033[34mCreated C\033[0m" << std::endl; return ( new C() );
    }
    return ( nullptr );
}

void    Base::identify( Base* p )
{
    //prints actual type of object pointed to by p
    std::cout << "Actual type of objcet pointed to: ";
    if ( dynamic_cast<A*>( p ) )
        std::cout << "\033[35mA\033[0m";
    else if ( dynamic_cast<B*>( p ) )
        std::cout << "\033[35mB\033[0m";
    else if ( dynamic_cast<C*>( p ) )
        std::cout << "\033[35mC\033[0m";
    else
        std::cout << "\e[31mUnknown\e[0m" << std::endl;
    std::cout << std::endl;
}

void    Base::identify( Base& p )
{
    //prints actual type of object referenced by p ------ using pointer inside this function is forbidden
    std::cout << "Acutal type of object referenced: ";
    try
    {
        ( void )dynamic_cast<A&>( p );
        std::cout << "\033[34mA\033[0m";
    }
    catch( std::bad_cast& )
    {
        try
        {
            ( void )dynamic_cast<B&>( p );
            std::cout << "\033[33mB\033[0m";
        }
        catch( std::bad_cast& )
        {
            try
            {
                ( void )dynamic_cast<C&>( p );
                std::cout << "\033[33mC\033[0m";
            }
            catch( std::bad_cast& )
            {
                std::cout << "\033[33mUnknown\033[0m";
            }
            
        }
    }
    std::cout << std::endl;
}