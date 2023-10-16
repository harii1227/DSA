#include <iostream>
#include <cmath>
using namespace std;

int DecimalTObinry(int n)
{
    int binarynumber = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binarynumber=bit*pow(10 , i++) + binarynumber;
        n=n/2;
    }
    return binarynumber;
}
int main()
{
    int n;
    cin>>n;
    int binary=DecimalTObinry(n);
    cout<<binary<<endl;
}