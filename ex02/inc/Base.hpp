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
    protected:
        Base();

    public:
        virtual         ~Base();
        static Base*    generate(void);
        static void     identify(Base* p);
        static void     identify(Base& p);
};
