#include "../inc/B.hpp"

B::B() : Base()
{
    std::cout << "\033[32mB default constructor!\033[0m" << std::endl;
}

B::~B()
{
    std::cout << "\033[31mB destructor!\033[0m" << std::endl;
}