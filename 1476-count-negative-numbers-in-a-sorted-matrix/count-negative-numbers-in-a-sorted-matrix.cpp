class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int cols = grid[0].size();
        for(auto& val: grid){
            int lo = 0;
            int hi = cols - 1;

            while(lo <= hi){
                int mid = lo + (hi - lo)/2;
                if(val[mid] < 0){
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }
            count += cols - lo; 
        }
        return count;
    }
};