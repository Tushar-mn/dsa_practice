#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*(i-1); j++){
            cout<<" ";
        }
        for(int j=0; j<=n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<2*(n-i); j++){
            cout<<" ";
        }

        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}