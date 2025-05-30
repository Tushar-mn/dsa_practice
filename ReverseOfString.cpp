#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

    string rev;
    for(int i=str.size()-1; i>=0; i--){
        rev = rev + str[i];
    }
    if(str == rev){
        cout<<"its a palindrome"<<endl;
    } else {
        cout<<"its not a palindrome"<<endl;
    }

    cout<<rev<<endl;
}