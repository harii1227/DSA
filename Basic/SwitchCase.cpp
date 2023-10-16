#include<iostream>
using namespace std;
 int main (){
    float a,b;
    cout<<"enter two number:"<<endl;
    cin>>a>>b;
    int op;
    cout<<"what operation you want?"<<endl;
    cin>>op;
    float ans = 0;

    switch(op){
        case 0:
        ans=a+b;
        break;
        case 1:
        ans=a-b;
        break;
        case 2:
        ans=a*b;
        break;
        case 3:
        ans=a/b;
        break;
        default:
            cout<<"invalid"<<ans<<endl;
    }
    cout<<"your ans" <<ans <<endl;
 }