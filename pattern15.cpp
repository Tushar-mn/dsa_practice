#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int size = 2*n+1;
    for(int i=1; i<=size; i++){
        for(int j=0; j<=(n+1)-i; j++){
            cout<<"*";
        }

        for(int j=1; j<2*i-1; j++){
            cout<<" ";
        }

        for(int j=0; j<=(n+1)-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}