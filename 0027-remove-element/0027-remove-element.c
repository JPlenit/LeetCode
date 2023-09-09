int removeElement(int* nums, int numsSize, int val){
    int k = 0;
    int n = numsSize;
    for (int i = 0; i < n; i++) {
        if (nums[i] == val) {
            nums[i--] = nums[--n];
            k++;
        }
    }
    return numsSize - k;
}