class Solution {
public:

    bool binarySearch(vector<int>& a, int target, int skip){
        int lo = 0;
        int hi = a.size()-1;

        while(lo <= hi){
            int mid = lo + (hi - lo)/2;

            if(mid == skip){
                if(a[mid] > target){
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
                continue;
            }

            if(a[mid] == target){
                return true;
            } else if(a[mid] < target){
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return false;
    }

    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        for(int i=0; i<arr.size(); i++){
            int val = arr[i];

            if(binarySearch(arr, 2*val, i)){
                return true;
            }

            if(val % 2 == 0){
                if(binarySearch(arr, val/2, i)){
                    return true;
                }
            }
        }
        return false;
    }
};