int pivotIndex(int* nums, int numsSize){
    int left = 0, right = numsSize - 1;
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < i; j++) leftSum += nums[j];
        for (int j = i + 1; j < numsSize; j++) rightSum += nums[j];
        if (leftSum == rightSum) return i;
        leftSum = 0; rightSum = 0;
    }
    return -1;
}