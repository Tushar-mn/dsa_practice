#include <iostream>
using namespace std;
const int N = 1e7+10;
long long ar[N];

int main(){

    //time limit exceeds in this case
    
    int n, m;
    cin >> n >> m;

    while(m--){
        int a, b, d;
        cin >> a >> b >> d;

        for(int i=a; i<=b; i++){
            ar[i] += d;
        }

        int max = -1;
        for(int i=1; i<=n; i++){
            if(max < ar[i]){
                max = ar[i];
            }
        }
        cout << max;
    }
}