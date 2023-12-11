#include<iostream>
using namespace std;

int findFirstOccurence(int arr[] , int n, int target){
    int start=0;
    int end= n-1;
    int mid=(start+end)/2;
    int ans= -1;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
         else if(target>arr[mid]){
            start=mid+1;
        }

        else if(target<arr[mid]){
            end=mid-1;

        }
        //glti yaha par krte hai
        mid=(start+end)/2;
       
    }
    return ans;
}