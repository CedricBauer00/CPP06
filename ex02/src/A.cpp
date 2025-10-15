#include "../inc/A.hpp"

A::A() : Base()
{
    std::cout << "\033[32mA default constructor!\033[0m" << std::endl;
}

A::~A()
{
    std::cout << "\033[0mA destructor!\033[0m" << std::endl;   
}