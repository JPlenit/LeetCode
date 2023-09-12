int largestAltitude(int* gain, int gainSize){
    int big = 0;
    int num = 0;
    for (int i = 0; i < gainSize; i++) {
        num += gain[i];
        if (big < num) big = num;
    }
    return big;
}