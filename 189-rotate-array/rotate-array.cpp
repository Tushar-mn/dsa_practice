class Solution {
public:
    void reverse(vector<int>& nums, int first, int second){
        while(first < second){
            swap(nums[first], nums[second]);
            first++;
            second--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;

        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
    }
};