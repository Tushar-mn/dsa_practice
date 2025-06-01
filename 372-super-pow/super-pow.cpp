class Solution {
public:

    int bitMul(int a, int b, int m){
        int ans = 1;
        while(b>0){
            if(b&1){
                ans = (ans * 1LL * a)% m;
            }

            a = (a * 1LL * a)%m;
            b >>= 1;
        }
        return ans;
    }

    int superPow(int a, vector<int>& b) {
        int bmod = 0;
        for(int val: b){
            bmod = (bmod * 10 + val)%1140;
        }

        if(bmod == 0){
            bmod += 1140;
        }
        return bitMul(a, bmod, 1337);
    }
};