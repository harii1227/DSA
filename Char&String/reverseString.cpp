#include <iostream>
using namespace std;


int findlength(char ch[], int size)
{

    // using while loop

    int length = 0;
    int index = 0;
    while (ch[index] != '\0')
    {
        length++;
        index++;
    }
}

void reverseString(char ch[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}



int main()
{

    char ch[100];
    cin.getline(ch, 100);
    cout<<"before "<<ch<<endl; 

    int len=findlength(ch, 100);
    reverseString(ch,len);   
    cout<<endl<<"after "<<ch<<endl;
}

