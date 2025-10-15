#include "../inc/Data.hpp"
#include "../inc/Serializer.hpp"

int main()
{
    Data        data( "Hello World", 100 );
    Data*       ptr = &data;
    uintptr_t   raw = Serializer::serializer( ptr );
    
    std::cout << "Raw value: " << raw << std::endl;

    Data*   restored = Serializer::deserialize( raw );
    std::cout << "Restored Data: " << restored->text << ", " << restored->number << std::endl;

    return ( 0 );
}