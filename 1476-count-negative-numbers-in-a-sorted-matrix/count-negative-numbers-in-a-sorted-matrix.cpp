class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(auto val: grid){
            for(int v: val){
                if(v < 0){
                    count++;
                }
            }
        }

        return count;
    }
};