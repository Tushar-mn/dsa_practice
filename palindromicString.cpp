#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	bool ispalindrome = true;

	for(int i=0; i<s.length()/2; i++){
		if(s[i] != s[s.length()-i-1]){
			ispalindrome = false;
		}
	}

	if(ispalindrome){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}