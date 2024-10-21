//2D Array
#include <stdio.h>

int main() {

    int array[2][3] = {
        {2, 5, 3},
        {4, 7, 9},
    };

    // Accessing an element, for example the element in the second row, third column
    printf("The element in the second row, third column is: %d\n", array[1][2]);

    return 0;
}