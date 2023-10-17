#include <iostream>
using namespace std;
//  int main(){
//     int n=5;
//     int target =4;
//     int arr[5]={2,3,4,5,6};
//     for(int i=0 ;i<n ;i++){
//         if(target==arr[i]){
//             cout<<"mil gaya"<<endl;
//             break;
//         }
//     }
//  }

int main()
{
    int n = 5;
    int target = 9;
    bool flag = 0;
    int arr[5] = {2, 3, 4, 5, 6};
    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}