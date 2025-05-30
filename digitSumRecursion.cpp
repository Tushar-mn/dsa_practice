#include<iostream>
using namespace std;

int digit(int n){
    if(n==0)
    return 0;
    return digit(n/10)+n%10;
}

int main(){
    int n;
    cin>>n;

    cout<<digit(n);
}