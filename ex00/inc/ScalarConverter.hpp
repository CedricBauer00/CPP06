#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <climits>
#include <cfloat>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
    //no private attributes, only one method
    private:
        ScalarConverter(); //to prevent instantaion
        ScalarConverter( const ScalarConverter& copy );
        ScalarConverter& operator=( const ScalarConverter& copy );
        ~ScalarConverter();

        //Helper functions
        static bool isChar( const std::string& l );
        static bool isInt( const std::string& l );
        static bool isFloat( const std::string& l );
        static bool isDouble( const std::string& l );

        static void ConvertChar( const std::string& l );
        static void ConvertInt( const std::string& l );
        static void ConvertFloat( const std::string& l );
        static void ConvertDouble( const std::string& l );

    public:
        static void convert( const std::string&  );
};
