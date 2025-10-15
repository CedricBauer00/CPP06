#include "../inc/Data.hpp"
#include "../inc/Serializer.hpp"

int main()
{
    Data        data( "Hello World", 100 );
    Data*       ptr = &data;
    uintptr_t   raw = Serializer::serializer( ptr );
    
    std::cout << "Raw value: \033[33m" 
                << raw 
                << "\033[0m"
                << std::endl;

    Data*   restored = Serializer::deserialize( raw );
    std::cout << "Restored Data: \033[34m"
                << restored->text
                << ", \033[34m"
                << restored->number
                << "\033[0m"
                << std::endl;

    return ( 0 );
}