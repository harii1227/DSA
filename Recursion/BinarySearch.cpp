#include<iostream>
using namespace std;

int Bsearch(int arr[],int s,int e,int target){
    if(s>e){
        return -1;

    }

    int mid=(e+s)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        s=mid+1;
        bool ans=Bsearch(arr,s,e,target);
        return ans;
    }
    else{
        e=mid-1;
        bool ans=Bsearch(arr,s,e,target);
        return ans;

    }
}

int main(){
    int arr[]={10,23,45,64,33};
    int size=5;
    int s=0;
    int e=size-1;
    int target=64;
    bool found=Bsearch(arr,s,e,target);

    if(found){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }

}