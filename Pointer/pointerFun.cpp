#include<iostream>
using namespace std;

void solve(int arr[],int size){
    // cout<<"size of array"<<sizeof(arr)<<endl;
    // cout<<arr<<endl;
    // cout<<&arr<<endl; 

    *arr = *arr+1;
}

// int main (){
//     int arr[]={10,20,30,40};
//     cout<<"size of array"<<sizeof(arr)<<endl; 
//     solve(arr,4);   //we should always try to pass their size


int main (){
    int arr[]={1,2,3,4,5};
    solve(arr , 5);
    for(int i=0 ; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
    // solve(arr,5);
    // cout<<arr<<endl;
    // cout<<&arr<<endl; 

    return 0;
}
    
