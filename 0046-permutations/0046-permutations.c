/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */


int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int** array;
    
    int* arrayNum = (int*)malloc(sizeof(int) * numsSize);
    int* box = (int*)malloc(sizeof(int) * numsSize);
    
    *returnSize = 1;
    for (int i = 1; i <= numsSize; i++) {
        arrayNum[numsSize - i] = (*returnSize);
        box[i - 1] = 0;
        (*returnSize) *= i;
    }

    

    array = (int**)malloc(sizeof(int*) * (*returnSize));
    *returnColumnSizes = (int*)malloc(sizeof(int) * (*returnSize));

    for (int i = 0; i < (*returnSize); i++) {
        array[i] = (int*)malloc(sizeof(int) * numsSize);
        (*returnColumnSizes)[i] = numsSize;
    }

    int n, k, count;
    for (int i = 0; i < numsSize; i++) {
        n = i;
        k = 0;
        count = 0;
        for (int j = 0; j < (*returnSize); j++) {
            if (j >= arrayNum[i] + k) {
                n = (n + 1) % numsSize;
                for (int k = 0; k < i; k++) {
                    if (array[j][k] == nums[n]) {
                        n = (n + 1) % numsSize;
                        k = 0;
                    }
                }
                k += arrayNum[i];
            }
            for (int k = 0; k < i; k++) {
                    if (array[j][k] == nums[n]) {
                        n = (n + 1) % numsSize;
                        k = 0;
                    }
                }
            array[j][i] = nums[n];
            count++;
        }
    } 

    return array;
}