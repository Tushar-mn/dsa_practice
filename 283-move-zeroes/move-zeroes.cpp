class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0; // Position to place the next non-zero

        // First pass: move all non-zeroes forward
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[index++] = nums[i];
            }
        }

        // Second pass: fill remaining with zeroes
        while(index < nums.size()) {
            nums[index++] = 0;
        }
    }
};
