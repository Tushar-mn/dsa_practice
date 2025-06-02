#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int count = 0;

	int val;
	cin >> val;

	vector<int> temp;
	set<int> s(a.begin(), a.end());

	for(int v: a){
		if(v != val){
			temp.push_back(v);
			count++;
		} else {
			s.erase(v);
		}
	}

	for(int i=0; i<temp.size(); i++){
		a[i] = temp[i];
	}
	
	cout << count << endl;
}