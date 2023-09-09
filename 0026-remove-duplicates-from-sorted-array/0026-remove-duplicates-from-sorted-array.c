int removeDuplicates(int* nums, int numsSize){
    int count = 0;
    int index[50000] = {0,};
    int k1 = 0, k2 = 0;
    for (int i; i < numsSize - 1; i++) {
        if (nums[i] == nums[i+1]) {
            index[k1++] = i + 1;
            count++;
        }
        else if (index[k2]) {
            index[k1++] = i + 1;
            nums[index[k2++]] = nums[i + 1];
        }
    }
    return numsSize - count;
}