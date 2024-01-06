#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i=0 ; i<v.size() ; i++){
        cout<< v[i] << " ";

    }
    cout<< endl;
}
bool mycomp(int &a , int &b){
    // return a<b;//return increasing order
    return a>b;    // decreasing order
}

int main(){
    vector<int> v ={3,4,9,2,56,34,1};
    // sort(v.begin(), v.end());    //sort increasing orde
    sort(v.begin(), v.end() , mycomp);   // sort decreasing order
    print(v);
    return 0;
}