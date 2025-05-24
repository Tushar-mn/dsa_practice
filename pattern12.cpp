#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2 == 0){
        cout<<"only for odd numbers";
        return 0;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout << endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n; j++){
            cout<<" ";
        }

        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}