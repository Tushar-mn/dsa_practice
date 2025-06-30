class Solution {
public:
    int reverse(long long x) {
        long long temp = x;
        long long rev = 0;

        while(temp != 0){
            int rem = temp%10;
            rev = rev*10+rem;

            temp /= 10;
        }
        if(rev > INT_MAX || rev < INT_MIN){
            return 0;
        }
        return rev;
    }
};