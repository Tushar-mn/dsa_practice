#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n%2 == 0){
        cout << "enter odd number";
        return 0;
    }

    for(int i=1; i<=n/2+1; i++){
        for(int j=0; j<=n/2-i; j++){
            cout<<" ";
        }

        for(int j=0; j<2*i-1; j++){
            cout<<"*";
        }
        cout << endl;
    }

    for(int i=1; i<=n/2; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }

        for(int j=0; j<2*(n/2-i)+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}