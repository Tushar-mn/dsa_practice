class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1){
            return 0;
        }

        vector<bool> isprime(n, 1);
        vector<int> divisor;

        isprime[0] = isprime[1] = false;
        for(int i=2; i<n; i++){
            if(isprime[i] == true){
                for(int j=2*i; j<n; j+=i){
                    isprime[j] = false;
                }
                divisor.push_back(i);
            }
        }
        int count = 0;
        for(int i: divisor){
            count++;
        }
        
        return count;
    }
};