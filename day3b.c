int missingNum(int arr[], int n) {
    long long sum = 0;

    // Expected sum from 1 to (n+1)
    long long expected = (long long)(n + 1) * (n + 2) / 2;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return expected - sum;
}
