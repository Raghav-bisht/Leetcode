class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int lateStreak = 0;

        for (char ch : s) {
            if (ch == 'A') {
                absent++;
                if (absent >= 2) return false;
            }

            if (ch == 'L') {
                lateStreak++;
                if (lateStreak >= 3) return false;
            } else {
                lateStreak = 0;
            }
        }

        return true;
    }
};