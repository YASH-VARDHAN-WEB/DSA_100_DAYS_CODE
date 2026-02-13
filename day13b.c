/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    
    int m = matrixSize;
    int n = matrixColSize[0];
    
    int *result = (int*)malloc(m * n * sizeof(int));
    *returnSize = m * n;
    
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    int k = 0;  // index for result array
    
    while(top <= bottom && left <= right) {
        
        // Top row
        for(int i = left; i <= right; i++)
            result[k++] = matrix[top][i];
        top++;
        
        // Right column
        for(int i = top; i <= bottom; i++)
            result[k++] = matrix[i][right];
        right--;
        
        // Bottom row
        if(top <= bottom) {
            for(int i = right; i >= left; i--)
                result[k++] = matrix[bottom][i];
            bottom--;
        }
        
        // Left column
        if(left <= right) {
            for(int i = bottom; i >= top; i--)
                result[k++] = matrix[i][left];
            left++;
        }
    }
    
    return result;
}
