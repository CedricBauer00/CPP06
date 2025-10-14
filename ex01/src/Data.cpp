#include "../inc/Data.hpp"

Data::Data() : text( "default" ), number( 0 )
{
    std::cout << "Default Data contructor!" << std::endl;    
}

Data::Data( const std::string& s, int n ) : text( s ), number( n )
{
    std::cout << "Parametric Data constructor!" << std::endl;
}