#include <stdio.h>

int main() {
    int data[3][2] = {
        {11,12},
        {21,22},
        {31,32},
    };

    int data2[2][2][2] = {
        {
            {1,2},
            {11,12}
        },
        {
            {4,5},
            {14,15}
        }
    };

    // Menampilkan Array 2 Dimension
    for (int n = 0; n < sizeof(data)/sizeof(data[0]); n++) {
        for (int j = 0; j < sizeof(data[0])/sizeof(data[0][0]); j++) {
            printf("%d ", data[n][j]);
        }
    }
    printf("\n");

    // printf("%ld \n", sizeof(data2));
    // printf("%ld \n", sizeof(data2[0]));
    // printf("%ld \n", sizeof(data2[0][0]));

    // Menampilkan Array 3 Dimension
    for (int n = 0; n < sizeof(data2)/sizeof(data2[0]); n++) {
        for (int j = 0; j < sizeof(data2[0])/sizeof(data2[0][0]); j++) {
            for (int k = 0; k < sizeof(data2[0][0])/sizeof(data2[0][0][0]); k++) {
                printf("%d ", data2[n][j][k]);
            }
        }
    }
    printf("\n");

    return 0;
}
