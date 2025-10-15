#include "../inc/ScalarConverter.hpp"

void    ScalarConverter::ConvertChar( const std::string& l )
{
    char    c = l[1];
    int     i = static_cast<int>(c);
    float   f = static_cast<float>(c);
    double  d = static_cast<double>(c);

    if ( c >= 32 && c <= 126 )
        std::cout << "\033[38;5;75mchar: \'" << c << "\'\033[0m" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "\033[91mint: " << i << "\033[0m" << std::endl;
    std::cout << "\033[38;5;202mfloat: " << std::fixed << std::setprecision(1) << f << "f\033[0m" << std::endl;
    std::cout << "\033[95mdouble: " << std::fixed << std::setprecision(1) << d << "\033[0m" << std::endl;
}

void    ScalarConverter::ConvertInt( const std::string& l )
{
    int i = std::stoi( l );
    if ( i < 0 || i > 127 )
        std::cout << "\033[38;5;75mchar: impossible\033[0m" << std::endl;
    else if ( i < 32 || i > 126)
        std::cout << "\033[38;5;75mchar: Non displayable\033[0m" << std::endl;
    else
        std::cout << "\033[38;5;75mchar: '" << static_cast<char>(i) << "'\033[0m" << std::endl;

    std::cout   << "\033[91mint: " << i << "\033[0m" << std::endl;
    std::cout   << "\033[38;5;202mfloat: " << std::fixed << std::setprecision(1) 
                << static_cast<float>(i) << "f\033[0m" << std::endl;
    std::cout   << "\033[95mdouble: " << std::fixed << std::setprecision(1)
                << static_cast<double>(i) << "\033[0m" << std::endl;
}

void    ScalarConverter::ConvertFloat( const std::string& l )
{
    //nanf +inff -inff cases
    float f;
    if ( l == "nanf")
        f = std::numeric_limits<float>::quiet_NaN();
    else if ( l == "+inff" )
        f = std::numeric_limits<float>::infinity();
    else if ( l == "-inff" )
        f = -std::numeric_limits<float>::infinity();
    else
    {
        std::string str = l.substr( 0, l.length() - 1);
        f = std::stof( str );
    }

    //Conversion
    if ( std::isnan( f ) || std::isinf( f ) )
    {
        std::cout << "\033[38;5;75mchar: impossible\033[0m" << std::endl;
        std::cout << "\033[91mint: impossible\033[0m" << std::endl;
    }
    else
    {
        if ( f < 0 || f > 127 )
            std::cout << "\033[38;5;75mchar: impossible\033[0m" << std::endl;
        else if ( f < 32 || f > 126 )
            std::cout   << "\033[38;5;75mchar: Non displayable\033[0m" << std::endl;
        else
            std::cout   << "\033[38;5;75mchar: '" << static_cast<char>(f) << "'\033[0m" << std::endl;

        //int conversion
        if ( f > INT_MAX || f < INT_MIN )
            std::cout   << "\033[91mint: impossible" << std::endl;
        else
            std::cout   << "\033[91mint: " << static_cast<int>(f) << "\033[0m" << std::endl;
    }
    
    //float conversion
    std::cout   << "\033[38;5;202mfloat: " << std::fixed << std::setprecision(1)
                << f << "f\033[0m" << std::endl;
    
    //double conversion
    std::cout   << "\033[95mdouble: " << std::fixed << std::setprecision(1)
                << f << "\033[0m" << std::endl;
}

void    ScalarConverter::ConvertDouble( const std::string& l )
{
    //nan +inf -inf cases
    double d;
    if ( l == "nan" )
        d = std::numeric_limits<double>::quiet_NaN();
    else if ( l == "+inf" )
        d = std::numeric_limits<double>::infinity();
    else if ( l == "-inf" )
        d = -std::numeric_limits<double>::infinity();
    else
    {
        d = std::stod( l );
        if ( d < 0 || d > 127 )
        std::cout << "\033[38;5;75mchar: impossible\033[0m" << std::endl;
        else if ( d < 32 || d > 126 )
            std::cout << "\033[38;5;75mchar: Non displayable\033[0m" << std::endl;
        else
            std::cout << "\033[38;5;75mchar: '" << static_cast<char>(d) << "'\033[0m" << std::endl;
        
        //int conversion
        if ( d < INT_MIN || d > INT_MAX )
            std::cout << "\033[91mint: impossible\033[0m" << std::endl;
        else
            std::cout << "\033[91mint: " << static_cast<int>(d) << "\033[0m" << std::endl;
        
        //float conversion
        std::cout   << "\033[38;5;202mfloat: " << std::fixed << std::setprecision(1)
                    << static_cast<float>(d) << "f\033[0m" << std::endl;

        //double
        std::cout   << "\033[95mdouble: " << std::fixed << std::setprecision(1)
                    << d << "\033[0m" << std::endl;
    }
}