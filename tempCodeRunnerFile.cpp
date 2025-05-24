#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;

    if(n % 2 == 0){
        cout << "Enter odd number";
        return 0;
    }

    // Top half including middle row
    for(int i = 0; i <= n / 2; i++){
        for(int j = 0; j < n / 2 - i; j++){
            cout << " ";
        }

        for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for(int i = 1; i <= n / 2; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        for(int j = 0; j < 2 * (n / 2 - i) + 1; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
