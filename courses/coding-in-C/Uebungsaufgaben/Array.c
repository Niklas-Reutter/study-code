#include <iostream>
using namespace std;

int main() 
    int array1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int array2[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            int temp = array1[i][j];
            array1[i][j] = array2[i][j];
            array2[i][j] = temp;
        }
    }