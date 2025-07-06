class Solution {
public:

    string processString(string s){
        stack<char> st;
        string s1;

        for(char c: s){
            if(c == '#'){
                if(!st.empty()) st.pop();
            } else {
                st.push(c);
            }
        }

        while(!st.empty()){
            s1 += st.top();
            st.pop();
        }

        return s1;
    }

    bool backspaceCompare(string s, string t) {
        return processString(s) == processString(t);
    }
};