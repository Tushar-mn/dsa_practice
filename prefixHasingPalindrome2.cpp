#include <iostream>
using namespace std;
const int N = 1e5+10;
long long hsh[N][26];

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin>>n>>q;

        for(int i=0; i<=n; i++){
            for(int j=0; j<26; j++){
                hsh[i][j] = 0;
            }
        }

        string s;
        cin >> s;

        for(int i=0; i<n; i++){
            for(int j=0; j<=26; j++){
                hsh[i+1][j] = hsh[i][j];
            }
            hsh[i+1][s[i] - 'a']++;
        }


        while(q--){
            int l, r;
            cin >> l >> r;

            int oddCt = 0;
            for(int i=0; i<26; i++){
                int charCt = hsh[r][i] - hsh[l-1][i];
                if(charCt % 2 != 0){
                    oddCt++;
                }
            }
            if(oddCt > 1){
                cout << "No\n";
            } else {
                cout << "Yes\n";
            }
        }
    }
}
