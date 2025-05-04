#include<iostream>
using namespace std;

bool compatable(string a, string b){
	if(a.length() != b.length()){
		return false;
	}

	int n = a.length();
	int currentDiff = -1;

	for(int i=0; i<n; i++){
		int diff = b[i] - a[i];
		if(diff < 0){
			return false;
		} else if(diff != currentDiff){
			if(diff < currentDiff){
				return false;
				currentDiff = diff;
			}
		}
	}

	return true;
}

int main(){
	string a;
	string b;
	cin >> a >> b;

	if(compatable(a, b)){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}