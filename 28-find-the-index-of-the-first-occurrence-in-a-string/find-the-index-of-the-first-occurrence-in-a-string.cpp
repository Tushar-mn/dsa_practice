class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.size();

        for(int i=0; i<haystack.size(); i++){
            if(haystack.substr(i, m) == needle){
                return i;
                break;
            }
        }

        return -1;
    }
};