class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstIndex = first(nums, target);
        int lastIndex = last(nums, target);

        return {firstIndex, lastIndex};
    }

    int first(vector<int>& nums, int target){
        int lo = 0;
        int hi = nums.size() - 1;
        int res = -1;

        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;

            if(nums[mid] == target){
                res = mid;       // store current match
                hi = mid - 1;    // move left
            } else if(nums[mid] < target){
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return res;
    }

    int last(vector<int>& nums, int target){
        int lo = 0;
        int hi = nums.size() - 1;
        int res = -1;

        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;

            if(nums[mid] == target){
                res = mid;       // store current match
                lo = mid + 1;    // move right
            } else if(nums[mid] < target){
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return res;
    }
};
