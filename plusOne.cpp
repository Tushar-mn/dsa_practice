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

	for(int i=0; i<n; i++){
		if(i == n-1){
			a[i] = a[i] + 1;
			
		}
		temp.push_back(a[i]);
	}

	for(int i=0; i<temp.size(); i++){
		cout << temp[i] << " ";
	}
	cout << endl;
}