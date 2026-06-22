class Solution {
public:
    int arrangeCoins(int n) {
        int coins = n;
        int i = 1;

        while (coins >= i) {
            coins = coins - i;
            i++;
        }

        return i - 1;
    }
};