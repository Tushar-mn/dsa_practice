class Solution {
public:
    void reverseString(vector<char>& s) {
        int lo = 0;
        int hi = s.size()-1;

        while(lo < hi){
            int temp = s[lo];
            s[lo] = s[hi];
            s[hi] = temp;

            lo++;
            hi--;
        }
    }
};