class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxNum = *max_element(nums.begin(), nums.end());
        int minNum = *min_element(nums.begin(), nums.end());

        return max(0, (maxNum-k)-(minNum+k));
    }
};