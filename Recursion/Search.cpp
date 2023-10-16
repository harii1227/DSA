#include<iostream>
using namespace std;
bool searcharray(int arr[] , int size ,int target ,int index){
    if(index>=size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    bool nextans = searcharray(arr , size ,target ,index+1);
    return nextans;
}

int main(){
    int arr[] = {23,4,75,34,22};
    int size=5;
    int index = 0;
    int target = 50;
    
    cout<<arr[index]<<" ";

}