class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool isinside = false;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '|'){
                isinside = !isinside;
            } else if(s[i] == '*' && !isinside){
                count++;
            }
        }

        return count;
    }
};