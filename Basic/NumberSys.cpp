#include<iostream>
using namespace std;

int decimalTobinary(int n){
    //division method
    while(n>0){
        int bit=n%2;
        cout<<bit<<endl;
        n=n/2;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int binary= decimalTobinary(n);
    cout<<binary<<endl;
}