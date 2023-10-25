#include<iostream>
using namespace std;
void printArray(int arr[][3] , int row , int col){
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    // cout<<arr[1,2];
    int row=2;
    int col=3;
    printArray(arr , row , col);
    return 0;
}