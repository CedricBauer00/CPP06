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

void    ScalarConverter::ConvertFloat( const std::string& l )
{
    std::string str = l.substr( 0, l.length() - 1);
    float       f = std::stof( str );

    //char conversion
    if ( f < 0 || f > 127 )
        std::cout << "char: impossible" << std::endl;
    else if ( f < 32 || f > 126 )
        std::cout   << "char: Non displayable" << std::endl;
    else
        std::cout   << "char: '" << static_cast<char>(f) << "'" << std::endl;

    //int conversion
    if ( f > INT_MAX || f < INT_MIN )
        std::cout   << "int: impossible" << std::endl;
    else
        std::cout   << "int: " << static_cast<int>(f) << std::endl;
    
    //float conversion
    std::cout   << "float: " << std::fixed << std::setprecision(1)
                << f << "f" << std::endl;
    
    //double conversion
    std::cout   << "double: " << std::fixed << std::setprecision(1)
                << f << std::endl;
}

void    ScalarConverter::ConvertDouble( const std::string& l )
{
    int d = stod( l );

    if ( d < 0 || d > 127 )
        std::cout << "char: impossible" << std::endl;
    else if ( d < 32 || d > 126 )
        std::cout << "char: Non displayable character" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    
    //int conversion
    if ( d < INT_MIN || d > INT_MAX )
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    
    //float conversion
    std::cout   << "float: " << std::fixed << std::setprecision(1)
                << d << "f" << std::endl;

    //double
    std::cout   << "double: " << std::fixed << std::setprecision(1)
                << d << std::endl;
}