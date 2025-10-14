#pragma once

#include <string>
#include <iostream>

struct Data
{
    std::string text;
    int         number;

    Data();
    Data( const std::string& s, int n );
};
