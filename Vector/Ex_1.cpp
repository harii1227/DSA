#include<iostream>
using namespace std;
void fun(int a[] , int n){
    cout<<"arrray element are"<<endl;
    for(int i=0 ; i< n ; i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    //int arr[5]={1,2,4,2,4};
    //fun(arr , 5);
    int n;
    cin>>n;
    int  *arr=new int[n]; 
    for(int i=0 ; i<n ; i++){
        int data;
        cin>>data;
        arr[i]=data;
    }
    fun(arr , n );
}
