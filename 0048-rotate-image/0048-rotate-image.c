void rotate(int** matrix, int matrixSize, int* matrixColSize){
    // (m, n) -> (n, (Size -1) - m)
    // (n, (Size -1) - m) -> ((Size - 1) - m, (Size - 1) - n)
    // ((Size - 1) - m, (Size - 1) - n) -> ((Size - 1) - n, m)
    // ((Size - 1) - n, m) -> (m, n)

    int m, n;
    int temp1, temp2, count = matrixSize / 2, repeat = matrixSize;

    for (int i = 0; i < count; i++) {
        m = i; n = i;
        for (int j = 0; j < repeat - 1; j++) {
            temp1 = matrix[m][n];
            for (int k = 0; k < 4; k++) {
                temp2 = matrix[n][matrixSize - 1 - m];
                matrix[n][matrixSize - 1 - m] = temp1;
                temp1 = temp2;
                temp2 = m;
                m = n;
                n = matrixSize - 1 - temp2;
            }
            n += 1;
        }
        repeat -= 2;
    }

}