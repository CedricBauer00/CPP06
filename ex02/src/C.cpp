#include "../inc/C.hpp"

C::C() : Base()
{
    std::cout << "\033[32mC default constructor!\033[0m" << std::endl;
}

C::~C()
{
    std::cout << "\033[31mC destructor!\033[0m" << std::endl;
}