void moveZeroes(int* nums, int numsSize) {
    int j = 0;

    // move non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }

    // fill remaining positions with 0
    while (j < numsSize) {
        nums[j++] = 0;
    }
}
