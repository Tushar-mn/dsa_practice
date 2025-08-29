#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	bool found = true;
	int count = 0;
	for(int i=0; i<a.size(); i++){
		for(int j=0; j*j<n; j++){
			if(a[i]%j == 0){
				count++;

				if(count > 3){
					found = false;
				} else if(count < 3){
					found = false;
				} else {
					found = true;
				}
			}
		}
		if(found){
			cout<<"no"<<endl;
		} else {
			cout<<"yes"<<endl;
		}
	}
}