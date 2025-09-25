class Solution {
public:
    int strStr(string haystack, string needle) {
        int hs = haystack.size();
        int ne = needle.size();

        for(int i=0; i<=hs-ne; i++){
            if(haystack.substr(i,ne) == needle){
                return i;
            }
        }

        return -1;
    }
};