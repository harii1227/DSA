#include <iostream>
using namespace std;

int findtotalOccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        // glti yaha par krte hai
        mid = (start + end) / 2;
    }
    return ans;
}
int findtotalOccurence(int arr[], int n, int target)
{
    int firstOcc = findFirstOccurence(arr, n, target);
    int lastOcc = findlastOccurence(arr, n, target);
    int Total = lastOcc + firstOcc + 1;
    return total;
}

int main()
{
    int arr[] = {2, 3, 9, 5, 6, 7, 7, 43, 34};
    int target = 7;
    int n = 9;

    int ans = findtotalOccurence(arr, n, target);
    cout<<"total occurence is "<<ans << endl;


    return 0;
}
