#pragma once

#include <string>
#include <iostream>

class Serializer
{
    private:
        Serializer();
        Serializer( const Serializer& copy );
        Serializer& operator=( const Serializer& copy );
        ~Serializer();
        

    public:
        uintptr_t   serializer( Data* ptr ); //takes a pinter, converts it to unsigned integer type uintptr_t
        Data*   deserialize( uintptr_t raw ); //takes unsigned int parameter, converts to a pointer to Data

};

