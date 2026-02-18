#include <stdio.h>

int main() {
    int n, k, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;   // Handle cases where k > n

    // Print rotated array
    for(i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for(i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
