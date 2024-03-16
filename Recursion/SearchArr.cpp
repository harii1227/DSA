#include<iostream>
using namespace std;

bool SearchArray(int arr[], int size,int target,  int index){
    if(index>=size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    bool Ans= SearchArray(arr,size,target,index+1);
    return Ans;
}

int main(){
    int arr[]={10,20,30,40};
    int size=4;
    int index =0;
    int target=40;
    cout<<SearchArray(arr,size,target,index);

}