#include<iostream>
#include<vector>
using namespace std;

void Occurence(int arr[],int size,int index,int target,vector<int> &ans){
    if(index>=size){  
        return;

    }
    if(arr[index]==target){
        ans.push_back(index);
    }

    Occurence(arr,size,index+1,target,ans);
}

int main(){
    int arr[]={10,20,30,40,10};
    int size=5;
    int index=0;
    int target =10;
    vector<int> ans;
    Occurence(arr,size,0,target,ans);
    cout << "Occurrences of " << target << " at indices: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;
    
    return 0;
}
