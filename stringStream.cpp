#include<bits/stdc++.h>
using namespace std;

// int main(){
// 	string s;
// 	char ch;
// 	int a, b, c;
// 	cin >> s >> a >> ch >> b >> ch >> c;

// 	vector<string> digit;

// 	for(char c: s){
// 		if(c != ch){
// 			digit.push_back(string(1, c));
// 		}
// 	}

// 	for(string ss: digit){
// 		cout << ss << " ";
// 	}

// 	cout << endl;
// }
int main(){
	string s;
	cin >> s;

	string temp = "";

	for(char c: s){
		if(c == ','){
			cout<<temp<<endl;
			temp = "";
		} else {
			temp += c;
		}
	}

	if(!temp.empty()){
		cout << temp << endl;
	}
}