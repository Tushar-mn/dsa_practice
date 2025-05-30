#include<iostream>
using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N];

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        pf[i] = pf[i-1] + a[i];
    }

    int t;
    cin >> t;
    while(t--){
        int l;
        int r;
        cin >> l >> r;

        cout << pf[r] - pf[l-1] << endl;
    }
}