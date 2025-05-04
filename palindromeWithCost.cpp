#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		string s;
		int n = s.length();
		cin >> n;
		cin >> s;


		int freq[26] = {0};
		for(char c: s){
			freq[c - 'a']++;
		}

		int count = 0;
		for(int i=0; i<26; i++){
			if(freq[i]%2 != 0){
				count++;
			}
		}

		cout<<max(0, count-1);
	}
}