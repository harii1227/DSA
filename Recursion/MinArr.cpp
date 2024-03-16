#include<iostream>
#include<limits.h>
using namespace std;

//////========MINIMUM  ELEMENT=============//////////
// void findMin(int arr[],int size,int index,int &mini){
//     if(index>=size){
//         return;
//     }

//     mini=min(mini,arr[index]);

//     findMin(arr,size,index+1,mini);
     
// }


///////======MAXIMUM ELEMENT========////
void findMax(int arr[],int size,int index,int &maxi){
    if(index>=size){
        return;
    }
    maxi=max(maxi,arr[index]);

    findMax(arr,size,index+1,maxi);
}

//NORMAL METHOD//

// int minArr(int arr[],int size){
//     int minAns = INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<minAns){
//             minAns=arr[i]; 
//         }
//     }
//     return minAns;
// }

int main(){
    int arr[]={10,20,30,9,40};
    int size=5;
    int index=0;
    int maxi=INT_MIN;
    findMax(arr,size,index,maxi);
    cout<<maxi;



    // int arr[]={10,20,30,9,40};
    // int size=5;
    // int index=0;
    // int mini=INT_MAX;
    // findMin(arr,size,index,mini);
    // cout<<mini;
}