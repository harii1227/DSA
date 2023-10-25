#include<iostream>
using namespace std;
bool FindTarget(int arr[][3] ,int row ,int col , int target){
    for(int i=0 ; i<row ;i++){
        for(int j=0 ; j<col ; j++){
            if(arr[i][j]==target){
return true;
            }
        }
    }
    return false;
}
int main (){
    int arr[2][3]={{2,3,4},{5,6,7}};
    int row=2;
    int col=3;
    int target=9;
    cout<<"fond or not: " <<FindTarget(arr , row ,col , target)<<endl;
    return 0;
}