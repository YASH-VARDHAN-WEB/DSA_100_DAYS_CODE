#include <stdio.h>

int main() {
    int n, i, j, count;
    int arr[100], visited[100];

    // Input size
    scanf("%d", &n);

    // Input elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;   // mark all as not visited
    }

    // Count frequency
    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;   // mark duplicate as visited
            }
        }

        printf("%d:%d ", arr[i], count);
    }

    return 0;
}
