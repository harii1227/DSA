#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;


    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(9);

    cout<<arr.size()<<endl;

     cout<<arr.empty()<<endl;

    // int arr[5];
    // vector<int> v(5, 123);
    // cout<<"size of vector : "<<v.size();
    // cout<<"printing vector"<<endl;
    // for(int i=0 ; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
}