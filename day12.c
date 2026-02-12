#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int A[m][n];
    int i, j;
    int symmetric = 1;

    // If not square, cannot be symmetric
    if (m != n) {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    // Read matrix
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(A[i][j] != A[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    // Print result
    if(symmetric == 1)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0;
}
