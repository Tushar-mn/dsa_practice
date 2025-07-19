class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        long long lo = 0;
        long long hi = nums.size()-1;

        while(lo < hi){
            long long mid = lo + (hi - lo)/2;

            if(nums[mid] > nums[mid+1]){
                hi = mid;
            } else {
                lo = mid+1;
            }
        }

        return lo;
    }
};