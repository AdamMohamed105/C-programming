//3D Array
#include <stdio.h>

int main() {
    
    int array[2][2][3] = {
        {
            {9, 6, 3},
            {8, 5, 5},
    
        },
        {
            {17, 61, 82},
            {13, 24, 19},
        
        }
    };

    
    for (int i = 0; i < 2; i++) { 
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 2; j++) { 
            for (int k = 0; k < 3; k++) { 
                printf("%d ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}