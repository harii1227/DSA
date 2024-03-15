#include<iostream>
using namespace std;

int PowerPrint(int n){
    if(n==0){
        return 1;
    }
    int ans = 2  * PowerPrint(n-1);
    return ans;

}

int main(){
    cout<<PowerPrint(4);

}