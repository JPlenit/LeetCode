void moveZeroes(int* nums, int numsSize){
    int count = 0;
    int location = 0;
    for (int i = 0; i < numsSize; i++) {
        if(!nums[i]) {
            count = 1;
        }
        else{            
            if (count) {
                nums[location] = nums[i];
                nums[i] = 0;
            }            
            location++;
        }
        
    }
}