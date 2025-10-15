#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class   A;
class   B;
class   C;

class Base
{
    private:
        Base(/* args */);

    public:
        virtual ~Base();
        Base*   generate( void );
        void    identify( Base *p );
        void    identify( Base& p );

};
