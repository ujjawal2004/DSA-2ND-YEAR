class Solution {
public:
    int arrangeCoins(int n) {
        if (n < 2) return n;
        long number_sums = 0;
        for (int i = 1; ; i++) {
            number_sums += i + 1;
            if (number_sums >= n) return i;
        }
    }
};
