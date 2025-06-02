#include<bits/stdc++.h>
using namespace std;

int main(){
	string heyStack;
	cin >> heyStack;

	string needle;
	cin >> needle;

	int m = needle.size();

	for(int i=0; i<heyStack.size(); i++){
		if(heyStack.substr(0, m) == needle){
			cout << i << endl;
			break;
		} else {
			cout << "-1" << endl;
		}
	}
}