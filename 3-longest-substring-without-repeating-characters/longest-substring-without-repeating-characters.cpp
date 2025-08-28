class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> peek;
        int left = 0;
        int maxLen = 0;

        for(int right=0; right<s.size(); right++){
            while(peek.count(s[right])){
                peek.erase(s[left]);
                left++;
            }

            peek.insert(s[right]);
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};