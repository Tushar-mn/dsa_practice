class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int res = 0;

        while(temp != 0){
            int rem = temp%10;

            if(res > INT_MAX/10 || (res == INT_MAX && rem < 7)) return 0;
            if(res < INT_MIN/10 || (res == INT_MIN && rem < -8)) return 0;

            res = res*10 + rem;
            temp /= 10;
        }

        return res;
    }
};