#include<iostream>
using namespace std;

void swap(int &a, int &b){ //inbuild in c++
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cin>>a>>b;

    cout<<a<<" "<<b<<endl;
    swap(a, b);
    cout<<a<<" "<<b<<endl;
}