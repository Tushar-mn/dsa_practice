class Solution {
public:
    int arrangeCoins(long long n) {
        long long lo = 0;
        long long hi = n;

        while(lo <= hi){
            long long mid = lo + (hi - lo)/2;
            long long coins = mid * (mid + 1)/2;

            if(coins == n){
                return mid;
            } else if(coins < n){
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return hi;
    }
};