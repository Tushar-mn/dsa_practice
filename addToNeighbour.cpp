#include<bits/stdc++.h>
using namespace std;

bool totalSum(vector<int> &a, int target, int i, int currentSum){
    if(i == a.size()){
        return currentSum == 0;
    }

    currentSum += a[i];
    if(currentSum > target){
        return false;
    }

    if(currentSum == target){
        return totalSum(a, target, i+1, 0);
    } else {
        return totalSum(a, target, i+1, currentSum);
    }
}

int minOperation(vector<int> &a){
    int n = a.size();
    int total = 0;
    for(int i: a){
        total += i;
    }

    for(int k=n; k>0; k--){
        if(total%k != 0) continue;
        int target = total/k;

        if(totalSum(a, target, 0, 0)){
            return n-k;
        }
    }
    return n-1;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        cout << minOperation(a) << endl;
    }
}