class Solution {
public:

    int largestDigit(int n){
        int maxDigit = 0;
        while(n>0){
            maxDigit = max(maxDigit, n%10);
            n/=10;
        }

        return maxDigit;
    }

    int maxSum(vector<int>& nums) {
        vector<vector<int>> digits(10);

        for(int num: nums){
            int ld = largestDigit(num);
            digits[ld].push_back(num);
        }

        int res = -1;
        for(int i=0; i<=9; i++){
            if(digits[i].size()>=2){
                sort(digits[i].rbegin(), digits[i].rend());
                res = max(res, digits[i][0]+digits[i][1]);
            }
        }
        return res;
    }
};