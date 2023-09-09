/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    *returnSize = candiesSize;
    int big = 0;
    for (int i = 0; i < candiesSize; i++) {
        if (big < candies[i]) big = candies[i];
    }

    bool* ar = (bool*)malloc(sizeof(bool) * candiesSize);

    for (int i = 0; i < candiesSize; i++) {
        if (big <= candies[i] + extraCandies) {
            ar[i] = true;
        }
        else {
            ar[i] = false;
        }
    }
    return ar;
}