#include<iostream>
using namespace std;
int count(int arr[] , int size){
    int zerocount=0;
    int onecount=0;

    for( int i=0 ; i<size ; i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++;
        }

    }
    cout<<"zero :"<<zerocount<<endl;
    cout<<"one :"<<onecount<<endl;
}

int main(){

    int arr[]={0,0,1,0,1,0,1,0,1,1,1,1,0,0,0,};
    int size=15;
    count(arr , size);


}