#include<iostream>
using namespace std;

void NewDigit(int num){
    while(num>0){
        int onesPlace=num%10;
        cout<<"digit"<<onesPlace;
        num=num/10;
    }
   
}

int main(){
    int num;
    cin>>num;
    int displaydigit=NewDigit(num);
    cout<<"required doigit"<<displaydigit<<endl;
}



// #include<iostream>
// using namespace std;

// void NewDigit(int num){
//     while(num>0){
//         int onesPlace=num%10;
//         cout<<"digit :"<<onesPlace<<endl;
//         num=num/10;
//     }
    
// }

// int main(){
//     int num;
//     cin>>num;
//     NewDigit(num);
// }