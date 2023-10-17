#include<iostream>
using namespace std;

void reverse(int arr[] ,int size){
int left=0;
int right=size-1;
int i=0;
while(left<=right){
    
    swap(arr[left] ,arr[right]);
    left++;
    right--;
}
for(int i=0 ; i<size ;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    int arr[]={23,4,21,2,211,121};
    int size=6;
    reverse(arr ,size);
}