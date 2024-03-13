#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return n;
    }
    int ans =factorial(n-1);
    int fact=n*ans;
}
int main(){
    cout<<factor ial(5)<<endl;
    return 0;
}