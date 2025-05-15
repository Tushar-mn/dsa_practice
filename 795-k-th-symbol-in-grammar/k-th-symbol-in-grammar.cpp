class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1){
            return 0;
        }

        int parent = kthGrammar(n-1, (k+1)/2);
        bool isOdd = k%2;

        if(parent == 0){
            return(isOdd?0:1);
        } else {
            return(isOdd?1:0);
        }
    }

    int grammer(int n, int k){
        return kthGrammar(n,k);
    }
};