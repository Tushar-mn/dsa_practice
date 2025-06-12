#include<bits/stdc++.h>
using namespace std;

pair<int, int> sumOfSubsarray(vector<int>& a, int target){
	int n = a.size();
	int right = 0;
	int left = 0;
	int sum = 0;

	while(right < n){
		sum += a[right];

		while(sum>target){
			sum -= a[left];
			left++;
		}

		if(sum == target){
			return {left+1, right+1};
		}

		right++;
	}
	return {-1, -1};
}

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int target;
	cin >> target;

	pair<int, int> res = sumOfSubsarray(a, target);

	if(res.first == -1){
		cout << -1 << endl;	
	}

	cout << res.first << " " << res.second;
}