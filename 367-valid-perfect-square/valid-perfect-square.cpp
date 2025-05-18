class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }

        long long lo = 1;
        long long hi = num;

        while(lo <= hi){
            long long mid = (lo+hi)/2;
            long long square = mid*mid;

            if(square == num){
                return true;
                break;
            } else if(square < num){
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return false;
    }
};