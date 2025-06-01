class Solution {
    public boolean isPalindrome(long x) {
        if(x < 0){
            return false;
        }

        long rev = 0;
        long temp = x;

        while(temp > 0){
            long r = temp % 10;
            rev = rev * 10 + r;

            temp /= 10;
        }

        if(rev == x){
            return true;
        } else {
            return false;
        }
    }
}