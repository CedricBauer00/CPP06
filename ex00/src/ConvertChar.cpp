#include "../inc/ScalarConverter.hpp"

void    ScalarConverter::ConvertChar( const std::string& l )
{
    char    c = l[1];
    int     i = static_cast<int>(c);
    float   f = static_cast<float>(c);
    double  d = static_cast<double>(c);

    if ( c >= 32 && c <= 126 )
        std::cout << "char: \'" << c << "\'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void    ScalarConverter::ConvertInt( const std::string& l )
{
    int i = std::stoi( l );
    if ( i < 0 || i > 127 )
        std::cout << "char: impossible" << std::endl;
    else if ( i < 32 || i > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;

    std::cout   << "int: " << i << std::endl;
    std::cout   << "float: " << std::fixed << std::setprecision(1) 
                << static_cast<float>(i) << "f" << std::endl;
    std::cout   << "double: " << std::fixed << std::setprecision(1)
                << static_cast<double>(i) << std::endl;
}