class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lo = 0;
        int hi = letters.size()-1;

        char res = letters[0];

        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(letters[mid] > target){
                res = letters[mid];
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        return res;
    }
};