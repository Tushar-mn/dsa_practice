class Solution {
public:
    int alternateDigitSum(int n) {
        string digit = to_string(n);
        int sum = 0;

        for(int i=0; i<digit.size(); i++){
            int num = digit[i] - '0';

            if(i%2 == 0){
                sum += num;
            } else{
                sum -= num;
            }
        }

        return sum;
    }
};