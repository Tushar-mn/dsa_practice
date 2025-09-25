class Solution {
public:

    int firstOccurence(vector<int>& nums, int target){
        int lo = 0;
        int hi = nums.size()-1;
        int ans = -1;

        while(lo <= hi){
            int mid = lo + (hi - lo)/2;

            if(nums[mid] == target){
                ans = mid;
                hi = mid-1;
            } else if(nums[mid] > target){
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        } 
        return ans;   
    }

    int secOccurence(vector<int>& nums, int target){
        int lo = 0;
        int hi = nums.size()-1;
        int ans = -1;

        while(lo <= hi){
            int mid = lo + (hi - lo)/2;

            if(nums[mid] == target){
                ans = mid;
                lo = mid+1;
            } else if(nums[mid] > target){
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurence(nums, target);
        int sec = secOccurence(nums, target);

        return {first, sec};
    }
};