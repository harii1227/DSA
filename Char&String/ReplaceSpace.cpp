#include <iostream>
using namespace std;

void replaceChar(char ch[], int n)
{
    int index = 0;

    while (ch[index] != '\0')
    {
        if (ch[index] == '@')
        {
            ch[index] = ' ';
        }
        index++;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);
    cout << "before " << ch << endl;
    replaceChar(ch, 100);
    cout << endl
         << "after " << ch << endl;
}