void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int i, j;
    int firstRow = 0, firstCol = 0;

    // Check first column
    for(i = 0; i < matrixSize; i++) {
        if(matrix[i][0] == 0) {
            firstCol = 1;
            break;
        }
    }

    // Check first row
    for(j = 0; j < matrixColSize[0]; j++) {
        if(matrix[0][j] == 0) {
            firstRow = 1;
            break;
        }
    }

    // Use first row and column as markers
    for(i = 1; i < matrixSize; i++) {
        for(j = 1; j < matrixColSize[0]; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set elements to zero based on markers
    for(i = 1; i < matrixSize; i++) {
        for(j = 1; j < matrixColSize[0]; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set first column to zero
    if(firstCol) {
        for(i = 0; i < matrixSize; i++) {
            matrix[i][0] = 0;
        }
    }

    // Set first row to zero
    if(firstRow) {
        for(j = 0; j < matrixColSize[0]; j++) {
            matrix[0][j] = 0;
        }
    }
}
