class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        sort(a.begin(), a.end());
        int n = a.size();

        auto it = lower_bound(a.begin(), a.end(), target);
        if(it != a.end()){
            return (it - a.begin());
        } else {
            return n;
        }
    }
};