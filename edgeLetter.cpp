#include<iostream>
using namespace std;
const int N = 1e5+10;
int suffixCount[N][26];

int main(){
	string s;
	cin>>s;
	int n = s.length();

	for(int i=0; i<26; i++){ // same here
		suffixCount[n][i] = 0;
	}

	for(int i=n-1; i>=0; i--){ // made base for array
		for(int ch=0; ch<26; ch++){
			suffixCount[i][ch] = suffixCount[i+1][ch];
		}
		suffixCount[i][s[i] - 'a']++;
	}

	int q;
	cin >> q;

	while(q--){
		char as;
		char bs;
		cin >> as >> bs;

		int count = 0;
		for(int i=0; i<n; i++){
			if(s[i] == as){
				count += suffixCount[i][bs - 'a'];
			}
		}

		cout<<count<<endl;
	}
}