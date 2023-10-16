#include<iostream>
using namespace std;

// void printMaximum(int n1 ,int n2, int n3){
//     if(n1>=n2 && n1>=n3 ){
//         cout<<"maximum is :"<<n1<<endl;
//     }
//     else if(n2>=n1 && n2>=n3){
//         cout<<"maximum is :" <<n2<<endl;
//     }
//     else{
//         cout<<"maximum is: "<<n3<<endl;
//     }
// }

// int main(){
//     printMaximum(2,4,5);

// }


//method 2---------------------------

void printMax(int n1 ,int n2 ,int n3){
    int ans1=max(n1 , n2);
    int finalAns=max(ans1,n3);
    cout<<"maximum number is :"<<finalAns<<endl;
}

int main(){
    printMax(3,20,4);

}