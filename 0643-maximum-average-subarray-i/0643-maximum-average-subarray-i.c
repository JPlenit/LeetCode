double findMaxAverage(int* nums, int numsSize, int k){
    int count = numsSize - k;
    double sum;
    int temp;

    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    temp = sum;

    for (int i = 0; i < count; i++) {
        temp = temp - nums[i] + nums[i + k];
        if (temp > sum) sum = temp;
    }
    
    return sum / k;
}