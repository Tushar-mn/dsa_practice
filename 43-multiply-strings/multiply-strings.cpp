class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0"){
            return "0";
        }

        int n = num1.size();
        int m = num2.size();
        vector<int> res(n+m, 0);

        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                int mul = (num1[i] - '0')*(num2[j] - '0');
                int sum = mul + res[i+j+1];

                res[i+j+1] = sum%10;
                res[i+j] += sum/10;
            }
        }

        string st;
        for(int val: res){
            if(!(st.empty() && val == 0)){
                st.push_back(val+'0');
            }
        }

        return st.empty()?"0":st;
    }
};