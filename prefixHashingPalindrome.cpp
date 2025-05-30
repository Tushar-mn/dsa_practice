#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        while(q--){
            int l, r;
            cin >> l >> r;

            int hsh[26];
            for(int i=0; i<26; i++){
                hsh[i] = 0;
            }
            l--;
            r--;

            for(int i=l; i<=r; i++){
                hsh[s[i] - 'a']++;
            }

            for(int i=l; i<r; i++){
                if(hsh[i]%2 != 0){
                    cout << "No\n";
                } else {
                    cout << "Yes\n";
                }
            }
        }
    }
} //time limit exceed
//O(1) + O(T*Q*(26+LtoR+LtoR) 