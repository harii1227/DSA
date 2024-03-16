#include<iostream>
using namespace std;

bool Sorted(int arr[],int size,int index){
    if(index>=size){
        return true;
    }
    if(arr[index]>arr[index-1]){
        bool ans=Sorted(arr,size,index+1);
        return ans;
    }
    else{
        return false;
    }
    Sorted(arr,size,index+1);
}
 int main(){
    int arr[]={10,23,45,64,33};
    int size=5;
    int index=0; 
    bool isSorted=Sorted(arr,size,index);

    if(isSorted){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
 }