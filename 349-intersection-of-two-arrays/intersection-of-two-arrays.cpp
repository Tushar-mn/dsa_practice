class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums2.begin(), nums2.end());
        vector<int> inter;

        for(int i:nums1){
            if(s.count(i)){
                inter.push_back(i);
                s.erase(i);
            }
        }

        return inter;
    }
};