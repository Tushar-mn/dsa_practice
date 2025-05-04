#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		string str1;
		string str2;
		cin>>str1;
		cin>>str2;

		int count = 0;
		for(int i=0; i<str1.length(); i++){
			bool found = false;
			for(int j=0; j<i; j++){
				if(str1[i] == str1[j]){
					found = true;
					break;
				}
			}
			if(found){
				continue;
			}

			for(char c: str2){
				if(str1[i] == c){
					count++;
					break;
				}
			}
		}

		cout<<count<<endl;
	}
}