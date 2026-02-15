#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[50][50];
    int flag = 1;

    // Input size
    scanf("%d", &n);

    // Input matrix elements
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check Identity Matrix condition
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                if(matrix[i][j] != 1) {
                    flag = 0;
                    break;
                }
            } else {
                if(matrix[i][j] != 0) {
                    flag = 0;
                    break;
                }
            }
        }
    }

    // Output result
    if(flag == 1)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}
