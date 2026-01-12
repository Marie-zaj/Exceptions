#include "ArrayValueCalculator.h"
#include "ArraySizeException.h"
#include "ArrayDataException.h"
using namespace std;

int ArrayValueCalculator::doCalc(string arr[][4], int rows) 
{
    if (rows != 4) {
        throw ArraySizeException();
    }

    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            try {
                int value = stoi(arr[i][j]);
                sum += value;
            }
            catch (...) 
            {
                throw ArrayDataException(i, j);
            }
        }
    }
    return sum;
}