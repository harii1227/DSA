#include<iostream>
using namespace std;

void lastOccurence(string &s, char x,int i,int &ans){
    if(i>=s.size()){
        return;
    }
    if(s[i]==x){
        ans=i;
    }
    lastOccurence(s,x,i+1,ans);
}

int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans=-1;

    lastOccurence(s,x,0,ans);
    cout<<ans<<endl;
}