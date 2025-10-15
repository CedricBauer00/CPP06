#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

int main()
{
    Base* ptr = Base::generate();
    Base::identify( ptr );
    Base::identify( *ptr );

    delete( ptr );

    return ( 0 );
}