#pragma once
#include <string>
using namespace std;

class ArraySizeException 
{
    string message;

public:
    ArraySizeException() {
        message = "Array size must be 4x4";
    }

    string getMessage() const {
        return message;
    }
};