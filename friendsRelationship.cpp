#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		for(int i=1; i<=n; i++){
			for(int j=1; j<=i; j++){
				cout<<"*";
			}

			for(int j=0; j<2*(n-i); j++){
				cout<<"#";
			}

			for(int j=1; j<=i; j++){
				cout<<"*";
			}
			cout<<endl;
		}
	}
}