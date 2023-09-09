bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    int count = 0;
    if (n == 0) return true;
    if (flowerbedSize == 1) {
        if (flowerbed[0] == 0 && n == 1) return true;
        else return false;
    }
    if (flowerbed[0] == 0 && flowerbed[1] == 0) {
        count++;
        flowerbed[0] = 1;
    }
    if (flowerbed[flowerbedSize - 2] == 0 && flowerbed[flowerbedSize - 1] == 0) {
        count++;
        flowerbed[flowerbedSize - 1] = 1;
    }
    if (n <= count) return true;
    
    for (int i = 1; i < flowerbedSize - 2; i++) {
        if (flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0) {
            flowerbed[i] = 1;
            count++;
            i++;
        }
        if (n <= count) return true;
    }

    return false;    
}