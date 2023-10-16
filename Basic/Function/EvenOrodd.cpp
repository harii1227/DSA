#include<iostream>
using namespace std;

bool evenodd(int n){
    if((n&1)==0){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    bool isEven=evenodd(n);

    if(isEven){
        cout<<"even number"<<endl;
    }
    else{
        cout<<"odd number"<<endl;
    }
}