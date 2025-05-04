#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1;
	cin>>str1;

	string str2;
	cin>>str2;

	string res = "";
	for(char c1: str1){
		bool found = false;
		for(char c2: str2){
			if(c1 == c2){
				found = true;
				break;
			}
		}
		if(!found){
			res += c1;
		}
	}

	cout<<res;
}