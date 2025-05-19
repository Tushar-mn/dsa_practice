class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
         int sum1 = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
         int sum2 = accumulate(bobSizes.begin(), bobSizes.end(), 0);

         int delta = (sum2 - sum1)/2;
         unordered_set<int> s(bobSizes.begin(), bobSizes.end());

         for(int val: aliceSizes){
            int y = val + delta;
            if(s.count(y)){
                return {val, y};
                break;
            }
         }
         return {};
    }
};