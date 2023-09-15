// struct linkedlist{
//     int index;
//     struct linkedlist* node;
// }
// typedef struct linkedlist link;

int maxProfit(int* prices, int pricesSize){

    int p = 0, min = 0, max = 1;


    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] <= prices[min]) {
            min = i;
            max = i;
        }
        else if (prices[i] >= prices[max]) {
            max = i;
        }
        if(max > min && prices[max] - prices[min] > p) {
            p = prices[max] - prices[min];
        }
    }
    // for (int i = 1; i < pricesSize; i++) {
    //     if (prices[max] <= prices[i]) {
    //         for (int j = min; j < i; j++) {
    //         if (p < prices[i] - prices[j]) {
    //             p = prices[i] - prices[j];
    //             min = j;
    //             max = i;
    //             }
    //         }
    //     }
    // }
    return p;
}