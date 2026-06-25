class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[300]={0};
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            arr[ch]++;
        }

        for(int i=0;i<t.length();i++){
            char ch=t[i];
            arr[ch]--;
        }

        for(int i=0;i<300;i++){
            if(arr[i]!=0){
                return false;

            }
        }
        return true;
    }
};