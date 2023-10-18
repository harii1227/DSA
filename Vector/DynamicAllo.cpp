#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v ){
    int size=v.size();
    
    for(int i=0 ; i<size ; i++){
        cout<<v[i]<<" " ;
    }
    cout<<endl;
}

int main(){
    vector<int>v;

    // while(1){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"capacity: "<<v.capacity()<<" size: "<<v.size()<<endl;

    // }
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);


    //pop ----delete

    v.pop_back();
    print(v);

    
}