#include <iostream>
using namespace std;

int main()
{

    /**
     *     int a = 5;
        cout<<a<<endl;
        cout<<"adress of s"<<&a<<endl;


        //pointer creation
        int* ptr =&a;

        cout<<"accessing: "<< *ptr<<endl;

        return 0;
    */

    // int a =5;
    // int* ptr = &a;
    // cout<<sizeof(*ptr)<<endl;

    // char ch = 'a';
    // char* cptr = &ch;
    // cout<<sizeof(*cptr)<<endl;

    // long lachi=10;
    // long* lptr =&lachi;
    // cout<<sizeof(*lptr)<<endl;

    int a = 100;
    int *ptr = &a;
    a = +1;
    ptr = ptr + 1;
    cout << a << endl;
    cout << ptr << endl;
}