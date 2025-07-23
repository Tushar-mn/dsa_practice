class Solution {
public:

    bool BinarySearch(vector<int>& nums1, int target){
        int lo = 0;
        int hi = nums1.size()-1;

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;

            if(nums1[mid] == target){
                nums1.erase(nums1.begin()+mid); // removing occurence
                return true;
            } else if(nums1[mid] < target){
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }

        return false;
    }

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            swap(nums1, nums2);
        }

        sort(nums2.begin(), nums2.end());
        vector<int> inter;

        for(int num: nums1){
            if(BinarySearch(nums2, num)){
                inter.push_back(num);
            }
        }

        return inter;
    }
};