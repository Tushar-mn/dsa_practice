#include <iostream>
using namespace std;
const int N = 1e7 + 10;
long long ar[N];

int main(){
    int n, m;
    cin >> n >> m;

    while(m--){
        int a, b, d;
        cin >> a >> b >> d;

        ar[a] += d;
        ar[b+1] -= d; 
    }

        for(int i=1; i<=n; i++){
            ar[i] += ar[i-1];
        }

        long long max = -1;
        for(int i=1; i<=n; i++){
            if(max < ar[i]){
                max = ar[i];
            }
        }

        cout << max << endl;
}