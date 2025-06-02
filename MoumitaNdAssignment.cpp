#include<bits/stdc++.h>
using namespace std;
const long long M =  2760727302517;

long long computeF(vector<int>& a){
	int n = a.size();
	int sum = 0;

	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			sum += (a[i] - a[j]);
		}
	}

	sum%=M;
	if(sum < 0) sum += M;
	return (sum * sum)%M;
}

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	cout << computeF(a) << endl;

}