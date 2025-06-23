class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int maxlt = 0;
        int left = 0;

        for(int i=0; i<s.size(); i++){
            while(st.count(s[i])){
                st.erase(s[left]);
                left++;
            }

            st.insert(s[i]);
            maxlt = max(maxlt, i-left+1);
        }
        return maxlt;
    }
};