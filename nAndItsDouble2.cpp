#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>&a, int target, int skip){
	int lo = 0;
	int hi = a.size()-1;

	while(lo <= hi){
		int mid = lo+(hi-lo)/2;

		if(mid == skip){
			if(a[mid] > target){
				hi = mid - 1;
			} else {
				lo = mid + 1;
			}
			continue;
		}

		if(a[mid] == target){
			return true;
		} else if(a[mid] < target){
			lo = mid + 1;
		} else {
			hi = mid - 1;
		}
	}

	return false;
}

 bool check(vector<int>& a){
 	sort(a.begin(), a.end());

 	for(int i=0; i<a.size(); i++){
 		int val = a[i];

 		if(binarySearch(a, 2*val, i)){
 			return true;
 		}

 		if(val%2 == 0){
 			if(binarySearch(a, val/2, i)){
 				return true;
 			}
 		}
 	}

 	return false;
 }

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	cout << check(a);
}