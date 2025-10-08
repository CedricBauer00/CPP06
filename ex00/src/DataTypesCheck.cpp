#include "../inc/ScalarConverter.hpp"


bool    ScalarConverter::isInt( const std::string& l )
{
    try
    {
        size_t  pos;
        std::stoi( l, &pos );
        return ( pos == l.length() );
    }
    catch ( const std::exception& e )
    {
        return ( false );
    }
}

bool    ScalarConverter::isChar( const std::string& l )
{
    return ( l.length() == 3 && l[0] == '\'' && l[2] == '\'');
}

bool    ScalarConverter::isDouble( const std::string& l )
{
    //nanf +inff -inff
    if ( l == "nan" || l == "+inf" || l == "-inf" )
        return ( true );
    
    try
    {
        if ( l.find( 'f' ) != std::string::npos)
            return ( false );
        size_t pos;
        std::stod( l, &pos );
        return ( pos == l.length() );
    }
    catch( const std::exception& e )
    {
        return ( false );
    }
}

bool    ScalarConverter::isFloat( const std::string& l )
{
    //nanf +inff -inff
    if ( l == "nanf" || l == "+inff" || l == "-inff" )
        return ( true );

    try
    {
        if ( l.back() != 'f' ) //wenn kein f hinter Zahl dann kein Float
            return ( false );
        std::string delF = l.substr( 0, l.length() - 1 ); //deletes 'f' character behind float number

        size_t  pos;
        std::stof( delF, &pos );
        return ( pos == delF.length() );
    }
    catch ( const std::exception& e )
    {
        return ( false );
    }
}
