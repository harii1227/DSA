#include <iostream>
using namespace std;
void Diagonalsum(int arr[][3], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + arr[i][i];
    }
    cout << sum << endl;
}

int main()
{
    int arr[3][3] = {
        {3, 6, 8},
        {2, 3, 4},
        {5, 6, 7}};
    int row = 3;
    int col = 3;
    Diagonalsum(arr, row, col);
}