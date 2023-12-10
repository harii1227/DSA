#include <iostream>
#include <vector>
using namespace std;

void waveprintmatrix(vector<vector<int>> v)
{
    int m = v.size();
    int n = v[0].size();
    for (int startcol = 0; startcol < n; startcol++)
    {
        if ((startcol & 1) == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << v[i][startcol] << " ";
            }
        }
        else
        {
            // odd no of column bottom-top
            for (int i = m - 1; i >= 0; i--)
            {
                cout<<v[i][startcol]<<" ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4}, {5, 4, 6, 7}, {4, 2, 8, 9}, {34, 334, 56, 1}, {2, 3, 1, 9}};
    waveprintmatrix(v);
    return 0;
}