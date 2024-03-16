#include<iostream>
#include<vector>
using namespace std;

// void result(int num){
//     if(num==0){
//         return;
//     }
//     int digit=num%10;
//     num=num/10;

//     result(num);

//     cout<<digit<<endl;
// }

// int main(){
//     int num=4217;
//     result(num);
// }



//NOW STORE IN VECTOR===========//


void Solve(int num, vector<int>& ans){
    if(num==0){
        return;
    }
    int digit=num%10;
    num=num/10;

    Solve(num,ans);

    ans.push_back(digit);

}

int main(){
    int num=4217;
    vector<int> ans;
    Solve(num,ans);
    for(int num: ans){
        cout<<num<<endl;
    }
}