class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int total= row*col;
        int s=0;
        int e=total-1;

        while(s<=e){
            int mid=(s+e)/2;

            int r=mid/col;
            int c=mid%col;

            if(matrix[r][c]==target){
                return true;
            }
            if(matrix[r][c]<target){
                s=mid+1;
            }
            if(matrix[r][c]>target){
                e=mid-1;
            }
        }
        return false;
    }
};