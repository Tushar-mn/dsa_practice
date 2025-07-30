class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) {
            return false;
        }

        vector<int>arr;
        while(n%2==0){
            arr.push_back(2);
            n = n/2;
        }
        for(int i = 3; 1LL*i*i<=n; i+=2){
            while(n%i == 0){
                arr.push_back(i);
                n = n/i;
            }  
        }
        if(n>2){
            arr.push_back(n);
        }
        for(int num : arr){
            if((num != 2) && (num != 3) && (num != 5)){
                return false;
            }
        }
        return true;
    }
};