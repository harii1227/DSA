#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int n)
{
    int onecount = 0;
    int zerocount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zerocount++;
        if (arr[i] == 1)
            onecount++;
    }
    int i;
    for(int i=0 ;i<zerocount ; i++){
        arr[i]=0;
    }
     for(int j=i ;j<n ; j++){
        arr[j]=1;
}
}

int main()
{
    int arr[] = {1, 0, 0, 0, 1, 0, 0, 1, 0, 0};
    int n = 10;
    sortZeroOne(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}