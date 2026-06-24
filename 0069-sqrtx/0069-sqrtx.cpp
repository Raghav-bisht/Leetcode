class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int target=x;
        int e=target;
        int ans=-1;

        while(s<=e){
            long long int mid=s+(e-s)/2;
            long long product=mid*mid;
            if(product==target){
                return mid;
            }
            if(product>target){
                e=mid-1;
            }
            if(product<target){
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
};