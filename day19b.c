int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int maxSubarraySumCircular(int* nums, int numsSize) {
    int total = 0;
    
    int curMax = 0, maxSum = nums[0];
    int curMin = 0, minSum = nums[0];
    
    for(int i = 0; i < numsSize; i++) {
        total += nums[i];
        
        // Normal Kadane (Maximum Subarray)
        curMax = max(nums[i], curMax + nums[i]);
        maxSum = max(maxSum, curMax);
        
        // Minimum Subarray
        curMin = min(nums[i], curMin + nums[i]);
        minSum = min(minSum, curMin);
    }
    
    // If all numbers are negative
    if(maxSum < 0)
        return maxSum;
    
    return max(maxSum, total - minSum);
}
