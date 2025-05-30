#include<iostream>
using namespace std;
const int N = 1e5+10;
int a[N];

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    int t;
    cin >> t;
    while(t--){
        int l;
        int r;
        cin >> l >> r;

        long long sum = 0;
        for(int i=l; i<=r; i++){
            sum += a[i];
        }

        cout << sum << endl;
    }
}