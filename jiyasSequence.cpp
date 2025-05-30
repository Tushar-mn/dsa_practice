#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long product = 1;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;

            product *(x % 10) % 10;
        }


        if(product == 2 || product == 3 || product == 5){
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
}