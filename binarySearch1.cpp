#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int target;
	cin >> target;

	int lo = 0;
	int hi = a.size()-1;
	bool found = false;

	while(lo <= hi){
		int mid = lo + (hi - lo)/2;

		if(a[mid] == target){
			cout << mid << endl;
			found = true;
			break;
		} else if(a[mid] < target){
			lo = mid + 1;
		} else {
			hi = mid;
		}
	}

	if(found){
		cout << "yes";
	} else {
		cout << "no";
	}
	
}