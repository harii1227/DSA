#include <iostream>
#include<string.h>
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
    return length;



    // using for loop
    //  int length = 0;
    //  for (int i = 0; i < size; i++)
    //  {
    //      if (ch[i] == '\0')
    //      {
    //          break;
    //      }
    //      else
    //      {
    //          length++;
    //      }
    //  }
    //  return length;
}

int main()
{

    char ch[100];
    cin.getline(ch, 100);
    int len = findlength(ch, 100); 
    cout << "length of string: " << len << endl;
    cout<<"printing length : "<<strlen(ch)<<endl;


    // //creation
    //     char arr[10];
    // //input
    //     cin>>arr;   // normally input take in cin way then only take first letter

    //     cin.getline(arr, 9);
    // //output
    //     cout<<"printing the value of arr: "<<arr<< endl;

    // // //printing using loop

    // //     for(int i=0 ; i<10 ; i++){
    // //         cout<<" at index: "<<i<<" " <<arr[i]<<endl;
    // //     }

    // //     char temp = arr[6];
    // //      int value=(int)temp;
    // //      cout<<"printing integer value: "<< value<<endl;

    // //     // for(int i=0; i<5 ;i++){
    // //     //     cin>>arr[i];
    // //     // }

    //     return 0;
}