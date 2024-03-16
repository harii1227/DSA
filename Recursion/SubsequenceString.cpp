#include<iostream>
#include<vector>
using namespace std;

void Subsequence(string str,string output,int index){
    if(index>=str.length()){
        //ans jo hai wo output string me aa chuka hai
        cout<<"="<<output<<endl;
        return;
    }
    char ch=str[index];

    //exclude
    Subsequence(str,output,index+1);

    //include
    output.push_back(ch);
    Subsequence(str,output,index+1);
}

int main(){
    string str="abc";
    string output="";
    int index=0;
    Subsequence(str,output,index);
}

