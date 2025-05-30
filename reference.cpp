#include<iostream>
using namespace std;

void increment(int &n){
    n++;
}

int main(){
    int a;
    cin>>a;

    cout<<a<<endl;
    increment(a);
    cout<<a<<endl;
}