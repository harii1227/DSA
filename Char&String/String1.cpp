#include <iostream>
using namespace std;

int main(){

    string name;

    // cin>>name;   using this we cant get entire line of code

    getline(cin, name);

    cout<<"print name: "<< name<<endl;

    // int index=0;
    // while(name[index] !='\0'){
    //     cout<<"index "<<index<<" charactern "<<name[index]<<endl;
    //     index++;
    // }

    // cout<<"print 6 index value: "<<name[6]<<endl;
    // int value=(int)name[6];

    // cout<<"value "<<value<<endl;
}