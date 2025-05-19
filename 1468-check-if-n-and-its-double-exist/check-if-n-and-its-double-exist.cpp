class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;

        for(int val: arr){
            if(s.count(2*val) || s.count(val/2) && val%2 == 0){
                return true;
            }
            s.insert(val);
        }

        return false;
    }
};