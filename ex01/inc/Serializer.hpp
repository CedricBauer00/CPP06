#pragma once

#include <string>
#include <iostream>
#include "Data.hpp"
#include <cstdint>

class Serializer
{
    private:
        Serializer();
        Serializer( const Serializer& copy );
        Serializer& operator=( const Serializer& copy );
        ~Serializer();
        

    public:
        static uintptr_t   serializer( Data* ptr ); //takes a pinter, converts it to unsigned integer type uintptr_t
        static Data*   deserialize( uintptr_t raw ); //takes unsigned int parameter, converts to a pointer to Data

};

