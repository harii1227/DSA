#include<iostream>
using namespace std;

moveAllNegaticeToleft(int*a, int n){
        int l=0 , h= n-1;
        while(l<h){
            if (a[l]<0)
            {
                l++;
            }
            else if(a[h]>0){
                h--;
            }
            else{
                swap(a[l], a[h]);
            }
        }
    }

int main(){
    int a[]={1,3,-2,5,-7,8};
    int n=sizeof(a)/sizeof(int);

    moveAllNegaticeToleft(a,n);

    for(int i=0 ; i<n ;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}