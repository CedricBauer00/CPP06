#include "../inc/Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Default Serializer constructor!" << std::endl;
}

Serializer::Serializer( const Serializer& copy )
{
    ( void )copy;
    std::cout << "Copy Serializer constructor" << std::endl;
}

Serializer& Serializer::operator=( const Serializer& copy )
{
    std::cout << "Assignment Serializer operator!" << std::endl;
    if ( this != &copy ) {}
    return ( *this );
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructor!" << std::endl;
}

uintptr_t   Serializer::serializer( Data* ptr ) //takes a pinter, converts it to unsigned integer type uintptr_t
{
    return ( reinterpret_cast<uintptr_t>( ptr ) );
}

Data*   Serializer::deserialize( uintptr_t raw ) //takes uintptr and converts it to Data* datatype
{
    return ( reinterpret_cast<Data*>( raw ) );
} 