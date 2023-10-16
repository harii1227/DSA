#include<iostream>
using namespace std; 
bool primeornot(int n){
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    bool prime=primeornot(n);

    if(prime){
        cout<<"its a prime number"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    

}