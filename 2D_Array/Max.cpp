#include <iostream>
#include <limits.h>
using namespace std;
int findMax(int arr[][3], int row, int col)
{
    int maxAns = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (arr[i][j]>maxAns);{
                maxAns=arr[i][j];
            }
        }
    }
    return maxAns;
}
    int main()
    {

        int arr[2][3] = {{2, 3, 4}, {5, 6, 7}};
        int row = 2;
        int col = 3;
        cout << "max number is : " << findMax(arr, row, col) << endl;
    }