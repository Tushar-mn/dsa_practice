#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int *p_x = &x;

    cout<<p_x<<endl;
    cout<<&x<<endl;
    cout<<*p_x<<endl;
    *p_x = 5;
    cout<<x<<endl;
    cout<<p_x+1<<endl;

    int **p_p_x = &p_x;
    cout<<&p_x<<endl;
    cout<<p_p_x<<endl;
    cout<<*p_p_x<<endl;
    cout<<**p_p_x<<endl;
}