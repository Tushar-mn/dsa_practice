class Solution {
public:
    bool isPalindrome(long long x) {
        if(x < 0){
            return false;
        }

        long long rev = 0;
        long long temp = x;

        while(temp > 0){
            long long rm = temp % 10;
            rev = rev*10 + rm;

            temp /= 10;
        }

        return rev == x;
    }
};