#include <iostream>
#include <limits.h>
using namespace std;

    int minimum(int arr[], int size)
    {
        int minAns = INT_MAX;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < minAns)
            {
                minAns = arr[i];
            }
        }
        return minAns;
    }

int main()
{
    int arr[] = {24, 42, 232, 23, 5, 3, 32};
    int size = 7;
    int ans = minimum(arr, size);
    cout << "min is" << ans << endl;
}