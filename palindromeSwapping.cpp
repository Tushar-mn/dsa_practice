#include<bits/stdc++.h>
using namespace std;
int freq[26];

int main(){
	string s;
	string t;
	cin>>s>>t;

	int n = s.length();

	for(int i=0; i<n; i++){
		freq[s[i] - 'a']++;
		freq[t[i] - 'a']++;
	}

	for(int i=0; i<26; i++){
		if(freq[i]%2 != 0){
			cout<<"No"<<endl;
			return 0;
		} 
	}
	cout<<"Yes"<<endl;
	return 0;
}