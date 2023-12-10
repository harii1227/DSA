#include<iostream>
using namespace std;

int binarysearch(int arr[] , int n , int target ){
    int start=0;
    int end= n-1;
    int mid=(start+end)/2;

    while(start<=end){
        ///found
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            //right me jao
            start=mid+1;
        }
        else if(target<arr[mid]){
            //left me jao
            end=mid-1;
        }
        //mid update
        mid=(start+end)/2;
    }
    //agar yaha tak pahuche ho
    //iska matalab element nahi  mila
    return -1;
}
 int main(){
    int arr[]={2,3,4,5,6,7,6,43,34};
    int target =34;
    int n=9;

    int ansIndex = binarysearch(arr , n , target);

    if(ansIndex== -1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found at index : "<<ansIndex<<endl;
    }
 }