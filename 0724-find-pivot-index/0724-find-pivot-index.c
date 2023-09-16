int pivotIndex(int* nums, int numsSize){
    int leftSum = 0, rightSum = 0;
    // for (int i = 0; i < numsSize; i++) {
    //     for (int j = 0; j < i; j++) leftSum += nums[j];
    //     for (int j = i + 1; j < numsSize; j++) rightSum += nums[j];
    //     if (leftSum == rightSum) return i;
    //     leftSum = 0; rightSum = 0;
    // }
    for (int j = 1; j < numsSize; j++) rightSum += nums[j];
    for (int i = 0; i < numsSize - 1; i++) {
        if (leftSum == rightSum) return i;
        leftSum += nums[i];
        rightSum = rightSum - nums[i + 1];
    }
    if (leftSum == rightSum) return numsSize - 1;
    return -1;
}