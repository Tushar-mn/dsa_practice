#include<bits/stdc++.h>
using namespace std;

int operations(vector<int>&arr, int i, int op, vector<int>&sum){

    if(i == arr.size()){
        return op;
    }

    sum.push_back(arr[i]);
    operations(arr, i-1, op+1, sum+arr[i]);
    sum.pop_back();
    operations(arr, i+1, op+1, sum+arr[i]);

}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int op = 0;
        vector<int> sum;
        int ops = operations(arr, 0, op, sum);
        cout << ops << endl;
    }
}
