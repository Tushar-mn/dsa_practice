#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> as(n);
	for(int i=0; i<n; i++){
		cin >> as[i];
	}

	int m;
	cin >> m;

	vector<int> bs(m);
	for(int i=0; i<m; i++){
		cin >> bs[i];
	}

	int sum1 = accumulate(as.begin(), as.end(), 0);
	int sum2 = accumulate(bs.begin(), bs.end(), 0);

	int delta = (sum2 - sum1)/2;

	unordered_set<int> s(as.begin(), as.end());

	for(int val: bs){
		int x = val - delta;

		if(s.count(x)){
			cout << x << " " << val << endl;
			break;
		} else {
			cout << "no valid swap" << endl;
		}
	}
}