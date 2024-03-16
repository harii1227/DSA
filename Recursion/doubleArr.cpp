#include<iostream>
using namespace std;

void Double(int arr[],int size,int index){
    if(index>=size){
        return;
    }
    arr[index]=2*arr[index];

    Double(arr,size,index+1);
}

int main(){
    int arr[]={10,20,30,40};
    int size=4;
    int index=0;
    Double(arr,size,index);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}