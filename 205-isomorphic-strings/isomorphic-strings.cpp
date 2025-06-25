class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, char> ct;
        unordered_map<char, char> tc;

        for(int i=0; i<s.size(); i++){
            int c = s[i];
            int c2 = t[i];

            if(ct.count(c)){
                if(ct[c] != c2){
                    return false;
                }
            } else {
                ct[c] = c2;
            }

            if(tc.count(c2)){
                if(tc[c2] != c){
                    return false;
                }
            } else {
                tc[c2] = c;
            }
        }
        return true;
    }
};