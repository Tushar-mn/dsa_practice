#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int k;
    cin >> k;

    int n = s.length();
    int op = 0;

    for(int i=0; i<n-k; i++){
        int freq[26] = {0};
        for(int j=i; j<i+k; j++){
            if(s[j] != '#'){
                freq[s[j] - 'a']++;
            }

            if(s[j] != '#' && freq[s[j] - 'a'] > 1){
                freq[s[j] - 'a']--;
                s[j] = '#';
                op++;
            }
        }
    }
    cout<<op<<endl;
}