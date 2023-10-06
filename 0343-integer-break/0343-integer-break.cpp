class Solution {
public:
    int integerBreak(int n) {
        int max = 0;
        int num;
        int sum;
        int temp;
        if (n == 3) return 2;
        for(int i = 1; i < n; i++) {
            sum = 1;
            num = n / i;
            temp = 0;
            for (int j = 1; j < num; j++) {
                sum *= i;
                temp += i;
            }
            sum *= (n - temp);

            if (sum > max) max = sum;
        }

        for(int i = 1; i < n; i++) {
            sum = 1;
            num = n / i;
            temp = 0;
            for (int j = 0; j < num; j++) {
                sum *= i;
                temp += i;
            }
            sum *= (n - temp);

            if (sum > max) max = sum;
        }
        

        return max;
    }
};