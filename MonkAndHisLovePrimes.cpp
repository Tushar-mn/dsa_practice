#include<iostream>
using namespace std;

int upper(char c){
    return 'A' + (c - 'a');
}

int lower(char c){
    return 'a' + (c -'A');
}

int main(){
    string s;
    cin>>s;

    int res = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = upper(s[i]);
            res -= s[i];
        } else if(s[i] >='A' && s[i] <= 'Z'){
            s[i] = lower(s[i]);
            res += s[i];
        }
    }
    
    if(res < 0){
        res = res * (-1);
    }

    bool flag = 0;
    for(int i=2; i<res; i++){
        if(res % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout<<0;
    } else {
        cout<<1;
    }
}