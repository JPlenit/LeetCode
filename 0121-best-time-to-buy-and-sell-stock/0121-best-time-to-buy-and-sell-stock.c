int maxProfit(int* prices, int pricesSize){

    int p = 0, min = 0, max = 0;


    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] <= prices[min]) {
            min = i;
            max = i;
        }
        else if (prices[i] >= prices[max]) {
            max = i;
            if(prices[max] - prices[min] > p) p = prices[max] - prices[min];
        }
    }
    return p;
}