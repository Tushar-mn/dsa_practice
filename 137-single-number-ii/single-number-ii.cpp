class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int val: nums){
            freq[val]++;
        }

        for(int val: nums){
            if(freq[val] == 1){
                return val;
                break;
            }
        }

        return -1;
    }
};