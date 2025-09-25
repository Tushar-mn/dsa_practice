class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long res = 0;

        while(temp > 0){
            int rem = temp % 10;
            res = res*10 + rem;

            temp /= 10;
        }

        if(x == res){
            return true;
        } else {
            return false;
        }
    }
};