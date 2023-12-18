#include<iostream>
using namespace std;

int GetQutient(int divisor, int dividend){

    int s=0;
    int e=dividend;
    int ans =-1;

    int mid=s+(e-s)/2;

    while(s<=e){
        if(mid*divisor== dividend){
            return mid;
        }
        if(mid*divisor<dividend){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int divisor=7;
    int dividend=45;

    int ans = GetQutient(divisor , dividend);
    cout<<"final ans is : "<<ans <<endl;
}