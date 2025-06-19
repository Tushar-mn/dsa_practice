class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for(int val: nums){
            freq[val]++;

            if(freq[val] > n/2){
                return val;
                break;
            }
        }

        return -1;
    }
};