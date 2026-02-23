class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int i = n-1;

        while(i>=0 && k>0){
            int sum = num[i] + k;
            num[i] = sum%10;
            k = sum/10;
            i--;
        }

        while(k>0){
            num.insert(num.begin(), k%10);
            k/=10;
        }

        return num;
    }
};