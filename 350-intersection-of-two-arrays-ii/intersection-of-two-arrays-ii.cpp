class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> inter;

        if(nums1.size() > nums2.size()){
            swap(nums1, nums2);
        }

        for(int val: nums1){
            freq[val]++;
        }

        for(int val: nums2){
            if(freq[val] > 0){
                inter.push_back(val);
                freq[val]--;
            }
        }

        return inter;
    }
};