class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                nums[count++] = nums[i];
            }
        }

        while(count < n){
                nums[count++] = 0;
        }
    }
};