#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int size = 2*n-1;

    for(int i=1; i<size; i++){
        for(int j=1; j<size; j++){
            int top = i-1;
            int bottom = size - 1 - i;
            int left = j-1;
            int right = size - 1 - j;

            int layer = min(min(top, bottom), min(left, right));

            cout << n-layer;
        }
        cout<<endl;
    }
}