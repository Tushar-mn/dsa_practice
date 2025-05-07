#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	unordered_map<string, int> m;

	while(n--){
		int type;
		string name;

		cin >> type >> name;

		if(type == 1){
			int marks;
			cin >> marks;

			m[name] += marks;
		}

		else if(type == 2){
			m.erase(name);
		}

		else if(type == 3){
			cout << m[name] << endl;
		}
	}
}