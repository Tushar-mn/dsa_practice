#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int m;
	cin >> m;

	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}

	int row[n] = {0}; //sum
	int col[m] = {0};

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			row[i] += a[i][j];
			col[j] += a[i][j];
		}
	}

	for(int i=0; i<n; i++){
		cout << row[i] << endl;
	}

	for(int i=0; i<col[i]; i++){
		cout << col[i] << endl;
	}
	// bool found = false;
	// int row1 = sizeof(row[0]);
	// int col1 = sizeof(col[0]);
	// for(int i=0; i<row1; i++){
	// 	for(int j=0; j<col1; j++){
	// 		if(row[i] == col[j]){
	// 			found = true;
	// 			break;
	// 		}
	// 	}
	// }

	// if(found){
	// 	cout << 1 << endl;
	// } else {
	// 	cout << 0 << endl;
	// }
}