int maxProfit(int* prices, int pricesSize){
    //int min, max;
    //min = prices[0]; max = prices[0];
    int p = 0, temp1 = 0, temp2 = 1;

    for (int i = 1; i < pricesSize; i++) {
        if (p < prices[i]) {
            for (int j = temp1; j < i; j++) {
            if (p < prices[i] - prices[j]) {
                p = prices[i] - prices[j];
                temp1 = j;
                temp2 = i;
                }
            }
        }
    }
    return p;
}