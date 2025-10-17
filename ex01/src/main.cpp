#include "../inc/Data.hpp"
#include "../inc/Serializer.hpp"

int main()
{
    Data        data( "Hello World", 100 );
    Data*       ptr = &data;
    
    std::cout << "Before serializing: \033[38;5;75m"
                << data.text
                << "\e[0m, \033[38;5;75m"
                << data.number
                << "\e[0m"
                << std::endl;

    uintptr_t   raw = Serializer::serializer( ptr );
                
    std::cout << "Raw value: \033[33m" 
                << raw 
                << "\033[0m"
                << std::endl;

    Data*   restored = Serializer::deserialize( raw );
    
    std::cout << "Restored Data: \033[38;5;75m"
                << restored->text
                << "\e[0m, \033[38;5;75m"
                << restored->number
                << "\033[0m"
                << std::endl;

    std::cout << "ptr addr:         "
                << ptr
                << std::endl;
    std::cout << "restored addr:    "
                << restored
                << std::endl;
    std::cout << "same pointer:     "
                << ( restored == ptr ? "yes" : "no" )
                << std::endl;


    return ( 0 );
}