#include <iostream>
using namespace std;
int Transpose(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

i nt main()
{
    int arr[3][3] = {
        {2, 3, 4}, {1, 5, 9}, {5, 6, 7}};
    int row = 3;
    int col = 3;
    cout << "before transpose" << endl;
    printArray(arr, row, col);
    cout << "doing transpose" << endl;
    Transpose(arr, row, col);
    cout << "after transpose" << endl;
    printArray(arr, row, col);
}