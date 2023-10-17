#include<iostream>
using namespace std;

bool finding(int arr[] , int size , int target){
for(int i=0 ; i<size ; i++){
    if(target==arr[i]){
        return true;
    }
}
return false;
}

int main(){
    int arr[4]={2,3,56,7};
    int size=4;
    int target=56;
    bool ans=finding(arr , size ,target);
     if(ans==1){
        cout<<"found"<<endl;
     }
     else{
        cout<<"not found"<<endl;
     }
}