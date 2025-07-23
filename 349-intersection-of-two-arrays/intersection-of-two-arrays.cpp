class Solution {
public:
    bool BinarySearch(vector<int>& nums1, int target){
        int lo = 0;
        int hi = nums1.size()-1;

        while(lo <= hi){
            int mid = lo + (hi-lo)/2;

            if(nums1[mid] == target){
                return true;
            } else if(nums1[mid] < target){
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }

        return false;
    }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(), nums2.end());        
        set<int> inter;

        for(int num: nums1){
            if(BinarySearch(nums2, num)){
                inter.insert(num);
            }
        }

        return vector<int>(inter.begin(), inter.end());
    }
};