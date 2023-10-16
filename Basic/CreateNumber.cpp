#include <iostream>
using namespace std;

int Number(int numberOfdigit)
{
    int num = 0;
    for (int i = 0; i < numberOfdigit; ++i)
    {
        cout << "Enter digit :" << endl;
        int digit;
        cin>>digit;
        num = num * 10 + digit;
        //cout<<"Number created so far :"<<num<<endl;
    }
    return num;
}

int main()
{
    int numberOfdigit;
    cin >> numberOfdigit;
    int num = Number(numberOfdigit);
    cout<<"created number :"<<num<<endl;
}