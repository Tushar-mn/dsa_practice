#include<iostream>
using namespace std;

void func(int n){
    if(n==0)
    return;
    func(n-1);
    cout<<n<<endl;
}

int main(){
    func(5);
}