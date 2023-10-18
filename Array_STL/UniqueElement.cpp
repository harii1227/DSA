#include<iostream>
using namespace std;

int getUnique(int arr[] , int size){
    int ans=0;
    for(int i=0 ; i<size ; i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[]={23,34,35,23,54,34,6,6,35};
    int size=9;
    int ans=getUnique(arr , size);
    cout<<"unique element : "<<ans <<endl;

}