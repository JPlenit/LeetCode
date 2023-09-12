int maxProfit(int* prices, int pricesSize){
    
    int p = 0, min = 0, max = 1;

    for (int i = 1; i < pricesSize; i++) {
        if (p < prices[i]) {
            for (int j = min; j < i; j++) {
                if (p < prices[i] - prices[j]) {
                    p = prices[i] - prices[j];
                    min = j;
                    max = i;
                }
            }
        }
    }
    return p;
}