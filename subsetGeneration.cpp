#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;

void generate(vector<int> &subset, int i, vector<int> nums){
	if(i == nums.size()){
		subsets.push_back(subset);
		return;
	}

	generate(subset, i+1, nums);

	subset.push_back(nums[i]);

	generate(subset, i+1, nums);

	subset.pop_back();
}

int main(){
	int n;
	cin >> n;

	vector<int> subset(n);
	for(int i=0; i<n; i++){
		cin >> subset[i];
	}

	vector<int> empty;
	generate(empty, 0, subset);
	for(auto subset: subsets){
		for(auto val: subset){
			cout<<val<<" ";
		}
		cout<<endl;
	}
}