#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long f = 1;
    int m = 47;

    for(int i=2; i<=n; i++){
        f = (f*i)%m;
    }

    cout<<f<<endl;
}