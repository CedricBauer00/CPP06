#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default ScalarConverter constrcutor!" << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter& copy )
{
    (void)copy;
    std::cout << "Copy ScalarConverter constructor!" << std::endl;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& copy )
{
    std::cout << "Assignment ScalarConverter operator!" << std::endl;
    if (this != &copy) {}
    return ( *this );
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor called!" << std::endl;
}

void ScalarConverter::convert( const std::string& literal )
{
    if ( isChar( literal ) )
        ConvertChar( literal );
    else if ( isInt( literal ) )
        ConvertInt( literal );
    else if ( isFloat( literal ) )
        ConvertFloat( literal );
    else if ( isDouble( literal ) )
        ConvertDouble( literal );
    else
        std::cout << "Unknown type: " << literal << std::endl;
}

//  if ( isChar( literal ) )  // ✅ Wenn es ein char IST
//     {
//         ConvertChar( literal );
//     }
//     else 
//     {
//         std::cout << "Not a char literal: " << literal << std::endl;
//     }