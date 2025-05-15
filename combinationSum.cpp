#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void combination(vector<int> arr,int i, vector<int>& comb, int target){

	if(i == arr.size() || target < 0){
		return;
	}

	if(target == 0){
		ans.push_back(comb);
		return;
	}

	comb.push_back(arr[i]);
	//single 
	// combination(arr, i+1, comb, target - arr[i]);

	//multiple
	combination(arr, i, comb, target - arr[i]);
	comb.pop_back(); // backtrack
	//exclude
	combination(arr, i+1, comb, target);
}

int main(){

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	int target;
	cin >> target;

	vector<int> t;

	combination(arr, 0, t, target);

	for(auto& comb: ans){
		cout << '{';
		for(auto i: comb){
			cout << i << " ";
		}
		cout << '}' << endl;
	}
}