class Solution {
public:
    string removeOuterParentheses(string s) {
        int dept = 0;
        string result;

        for(char c: s){
            if(c == '('){
                if(dept > 0){
                    result+=c;
                }
                dept++;
            } else if(c == ')'){
                dept--;
                if(dept > 0){
                    result+=c;
                }
            }
        }

        return result;
    }
};