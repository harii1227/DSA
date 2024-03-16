#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index){
    if(index>=size){
        return;
    }
    // printArray(arr,size,index+1);

    cout<<arr[index]<<" ";

    printArray(arr,size,index+1);
}

int main(){
    int arr[]={10,20,30,40};
    int size =4;
    int index=0;
    printArray(arr,size,index);
}