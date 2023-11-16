
 

#include <iostream>
using namespace std;
void shiftnegativeNoOneSide(int arr[] , int n){
    int j=0;
    //j-jha pr negative number store kr rhe hai

    for(int index=0 ; index<n ; index++){
        if(arr[index]<0){
            swap(arr[index] , arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[] = {23, -34, -23, 2, 4, 5, -23, -233, 23};
    int n = 9;

    shiftnegativeNoOneSide(arr, n);

    cout << "printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
