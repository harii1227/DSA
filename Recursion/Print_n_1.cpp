#include<iostream>
using namespace std;
int print(int n){
    if(n==1){
        cout<<1<<" ";
        return 1;
    }
    cout<<n<<" ";
    print(n-1);


    // print(n-1);   ------output=12345
    // cout<<n<<" ";

}
int main(){
    print(5); 
}