#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &v, int element){
	int lo=0;
	int hi=v.size()-1;
	int mid;

	while(hi-lo>1){
		int mid = (hi+lo)/2;
		if(v[mid] < element){
			lo = mid+1;
		} else {
			hi = mid;
		}
	}
	if(v[lo] >= element){
		return lo;
	} else if(v[hi] >= element){
		return hi;
	}
	return -1;
}

int upperBound(vector<int> &v, int element){
	int lo=0;
	int hi=v.size()-1;
	int mid;

	while(hi-lo>1){
		int mid = (hi+lo)/2;
		if(v[mid] <= element){
			lo = mid+1;
		} else {
			hi = mid;
		}
	}
	if(v[lo] > element){
		return lo;
	} else if(v[hi] > element){
		return hi;
	}
	return -1;
}

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int element;
	cin >> element;

	int lb = lowerBound(a, element);
	cout << lb << " " << (lb != -1 ? a[lb] : -1) << endl;

	int ub = upperBound(a, element);
	cout << ub << " " << (ub != -1 ? a[ub] : -1) << endl;
}