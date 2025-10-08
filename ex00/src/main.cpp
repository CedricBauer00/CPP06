#include "../inc/ScalarConverter.hpp"

int main()
{
    std::cout << "\n======= Char Tests =======\n" << std::endl;

    std::cout << "--- Test 1:  'a' ---" << std::endl;
    ScalarConverter::convert( "'a'" );
    std::cout << "--- Test 2:  '5' ---" << std::endl;
    ScalarConverter::convert( "'5'" );
    std::cout << "--- Test 3:  '*' ---" << std::endl;
    ScalarConverter::convert( "'*'" );

    std::cout << "\n======= Int Tests =======\n" << std::endl;

    std::cout << "--- Test 1: Normal int: 42 ---\n" << std::endl;
    ScalarConverter::convert( "42" );
    std::cout << "--- Test 2: Normal int: 65 ('A') ---\n" << std::endl;
    ScalarConverter::convert( "65" );
    std::cout << "--- Test 3: Non displayable (0) ---\n" << std::endl;
    ScalarConverter::convert( "0" );
    std::cout << "--- Test 4: Non displayable (31) ---\n" << std::endl;
    ScalarConverter::convert( "31" );
    std::cout << "--- Test 5: Impossible range (-1) ---\n" << std::endl;
    ScalarConverter::convert( "-1" );
    std::cout << "--- Test 6: Impossible range (200) ---\n" << std::endl;
    ScalarConverter::convert( "200" );
    
    std::cout << "\n======= Float Tests =======\n" << std::endl;

    std::cout << "\n--- Test 1: ---\n" << std::endl;
    ScalarConverter::convert( "65.0f" );
    std::cout << "\n--- Test 2: ---\n" << std::endl;
    ScalarConverter::convert( "65.5f" );
    std::cout << "\n--- Test 3: ---\n" << std::endl;
    ScalarConverter::convert( "65.2f" );
    std::cout << "\n--- Test 4: Non displayable: (0.0f) ---\n" << std::endl;
    ScalarConverter::convert( "0.0f" );
    std::cout << "\n--- Test 5: Impossible: (2000.11f) ---\n" << std::endl;
    ScalarConverter::convert( "2000.11f" );
    std::cout << "\n--- Test 5: Impossible: (-42.5f) ---\n" << std::endl;
    ScalarConverter::convert( "-42.5f" );
    std::cout << "\n--- Test 5: Impossible: (-1.0f) ---\n" << std::endl;
    ScalarConverter::convert( "-1.0f" );
    std::cout << "\n--- Test 5: small decimal test: (0.1f) ---\n" << std::endl;
    ScalarConverter::convert( "0.1f" );



}

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0
// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan
// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0