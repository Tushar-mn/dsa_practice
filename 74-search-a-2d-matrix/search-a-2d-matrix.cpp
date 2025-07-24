class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int lo = 0;
        int hi = m*n-1;

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;

            int row = mid/m;
            int col = mid%m;

            int val = matrix[row][col];

            if(val == target){
                return true;
            } else if(val < target){
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }

        return false;
    }
};