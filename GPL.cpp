#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;
        long long result = 0;
        long long power_two = 1;

        for(int i=s.size()-1; i>=0; i--){
            int binary_digit = s[i] - '0';
            result = result + (binary_digit * power_two);
            power_two = power_two*2;
        }

        cout<<result<<endl;
    }
}