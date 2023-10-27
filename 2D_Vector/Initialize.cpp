#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr(5, vector<int>(10,8));
    for(int i=0 ; i<arr.size() ; i++){
        for(int j=0 ; j<arr.size() ; j++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}