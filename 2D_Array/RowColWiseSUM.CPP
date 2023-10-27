#include<iostream>
using namespace std;
void RowWisesum(int arr [2][3], int row , int col){
    for(int i=0 ; i<row ; i++){
       // for(int i=0 ; i<col ; i++)  column wise   -----------------
        int sum =0;
        for(int j=0 ; j<col ; j++){
           // for(int j=0 ; j<row ; j++)   column wise ------------------------
            sum= sum +arr[i][j];
        }
        cout<<sum <<endl;
    }
}

int main(){
     int arr[2][3]={
        {2,3,4},
     {5,6,7}
     };
    int row=2;
    int col=3;
    RowWisesum(arr , row , col);

}