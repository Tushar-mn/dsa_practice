#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        int q;
        cin>>n;
        cin>>q;
         
        int a[n+10];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }

        while(q--){
            int l, r;
            cin>>l>>r;
            int gc = 0;

            for(int i=1; i<=l-1; i++){
                gc = gcd(gc, a[i]);
            }
            for(int i = r+1; i<=n; i++){
                gc = gcd(gc, a[i]);
            }
            cout << gc << endl;
        }
    }
}