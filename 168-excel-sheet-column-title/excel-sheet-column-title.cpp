class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        int n = columnNumber;

        while(n>0){
            n--;
            char c = 'A' + (n%26);

            res.push_back(c);
            n/=26;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};