#include <iostream>
#include "ArrayValueCalculator.h"
#include "ArraySizeException.h"
#include "ArrayDataException.h"
using namespace std;

int main() 
{
    string arr[4][4] = {
        {"1", "2", "3", "4"},
        {"5", "6", "7", "8"},
        {"9", "10", "11", "12"},
        {"13", "14", "15", "x"}
    };

    ArrayValueCalculator calculator;

    try {
        int result = calculator.doCalc(arr, 4);
        cout << "Result: " << result << endl;
    }
    catch (const ArraySizeException& e) {
        cout << "Size error: " << e.getMessage() << endl;
    }
    catch (const ArrayDataException& e) {
        cout << "Data error: " << e.getMessage() << endl;
    }

    return 0;
}