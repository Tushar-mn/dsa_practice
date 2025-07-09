class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign = 1;
        long res = 0;

        //space
        while(i<s.size() && s[i] == ' '){
            i++;   
        }

        if(s.size() == 0) return 0;

        if(i<s.size() && s[i] == '-' || s[i] == '+'){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while(i<s.size() && isdigit(s[i])){
            int digit = (s[i] - '0');

            if(res > (INT_MAX - digit)/10){
                return ((sign == 1)?INT_MAX:INT_MIN);
            }

            res = res*10 + digit;
            i++;
        }

        return sign*res;
    }
};