#include "../inc/Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Default Serializer constructor!" << std::endl;
}

Serializer::Serializer( const Serializer& copy )
{
    ( void )copy;
    std::cout << "Copy Serializer destrcutor" << std::endl;
}

Serializer& operator=( const Serializer& copy )
{
    std::cout << "Assignment Serializer operator!" << std::endl;
    if ( this != copy ) {}
    return ( *this );
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructor!" << std::endl
}

uintptr_t   serializer( Data* ptr ) //takes a pinter, converts it to unsigned integer type uintptr_t
{
    //still to implement
}

Data*   deserialize( uintptr_t raw )
{
    //still to implement
} 