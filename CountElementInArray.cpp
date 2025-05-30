#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int q;
    cin >> q;

    while(q--){
        int x;
        cin >> x;

        int ct = 0;
        for(int i=0; i<n; i++){
            if(ct == a[i]){
                ct++;
            }
        }
        cout << ct << endl;
    }

}