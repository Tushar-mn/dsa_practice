class Solution {
public:
    string addStrings(string num1, string num2) {
        int s1 = num1.size()-1;
        int s2 = num2.size()-1; 
        int carry = 0;

        string result = "";
        while(s1>=0 || s2>=0 || carry>0){
            int sum = carry;

            if(s1 >= 0){
                sum += num1[s1] - '0';
                s1--;
            } 

            if(s2 >= 0){
                sum += num2[s2] - '0';
                s2--;
            }

            result.push_back((sum%10) + '0');
            carry = sum/10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};