#include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v1, vector<int> v2){
	unordered_map<int, int> nge;
	stack<int> st;

	for(int num: v2){
		while(!st.empty() && num > st.top()){
			nge[st.top()] = num;
			st.pop();
		}
		st.push(num);
	}

	while(!st.empty()){
		nge[st.top()] = -1;
		st.pop();
	}

	vector<int> res;
	for(int s: v1){
		res.push_back(nge[s]);
	}

	return res;
}

int main(){
	int num1;
	cin>>num1;
	vector<int> v1(num1);
	for(int i=0; i<num1; i++){
		cin >> v1[i];
	}

	int num2;
	cin>>num2;
	vector<int> v2(num2);
	for(int i=0; i<num2; i++){
		cin >> v2[i];
	}

	vector<int> res = NGE(v1, v2);
	for(int val: res){
		cout << val << " ";
	}
	cout << endl;
}