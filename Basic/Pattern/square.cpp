#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i=i + 1)
    {
        for (int j = 0; j < 9; j=j + 1){
            if(i==0||i==4-1 & j==0 || j==9-1 ){
                cout << "* ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}