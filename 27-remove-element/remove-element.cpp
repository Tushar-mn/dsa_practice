class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count = 0;
        vector<int> temp;
        set<int> s(nums.begin(), nums.end());

        for(int v: nums){
            if(v != val){
                temp.push_back(v);
                count++;
            } else {
                s.erase(v);
            }
        }

        for(int i=0; i<temp.size(); i++){
            nums[i] = temp[i];
        }

        return count;
    }
};