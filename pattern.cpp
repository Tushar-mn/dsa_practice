#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin>>n;

		int size = 2*n-1;

		for(int i=1; i<=size; i++){
			for(int j=1; j<=size; j++){
				int top = i-1;
				int bottom = j-1;
				int right = size-j;
				int left = size-i;

				int layer = min(min(top, bottom), min(left, right));

				cout<<n-layer;
			}
			cout<<endl;
		}
	}
}