class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string ans = "";

        while (ss >> word) {
            if (ans!=""){
                ans = " " + ans;
            }
            ans = word + ans;
        }

        return ans;
    }
};