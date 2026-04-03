class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() < nums2.size()){
            return findMedianSortedArrays(nums2, nums1);
        }

        for(int i=0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());
        int mid = nums1.size()/2.0;
        if(nums1.size()%2 == 1){
            return nums1[mid];
        }

        return (nums1[mid]+nums1[mid-1])/2.0;
    }
};