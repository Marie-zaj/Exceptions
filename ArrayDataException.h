#pragma once
#include <string>

using namespace std;

class ArrayDataException
{
    int row;
    int col;
    string message;

public:
    ArrayDataException(int r, int c) : row(r), col(c) {
        message = "Invalid data at cell [" +
            to_string(row) + "][" +
            to_string(col) + "]";
    }
    string getMessage() const {
        return message;
    }

    int getRow() const {
        return row;
    }

    int getCol() const {
        return col;
    }
};
