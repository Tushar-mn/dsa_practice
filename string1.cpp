#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	for(int i=0; i<s.length()/2; i++){
			int temp = s[i];
			s[i] = s[s.length()-i-1];
			s[s.length()-i-1] = temp;
		}

	cout<<s;
}