//specific
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	vector<int> temp;
	int newLength = 0;

	for(int i=0; i<n; i++){
		bool isDuplicate = false; //check 

		for(int j=0; j<newLength; j++){
			if(a[i] == temp[j]){
				isDuplicate = true;
				break;
			}
		}

		if(!isDuplicate){
			temp.push_back(a[i]);
			newLength++;
		}
	}

	for(int i=0; i<newLength; i++){
		cout << temp[i] << " ";
	}
	cout << endl;
}