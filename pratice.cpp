#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;

	int count = 0;

	for(int i=0; i<s1.length(); i++){
		bool found = false;
		for(int j=0; j<i; j++){
			if(s1[i] == s1[j]){
				found = true;
				break;
			}
		}

		if(found){
			continue;
		}

		for(char c: s2){
			if(s1[i] == c){
				count++;
			}
		}
	}
	cout << count << endl;
}