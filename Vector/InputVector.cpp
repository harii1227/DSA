#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)

{
    int size = v.size();
    cout<<"printing vector"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<v.at(i)<<" ";
        //cout << v[i] << " ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    cout<<"how many :";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    // if we want again 
    //increase ind insert new element in array 
    // we can also do this.


    // print(v);
    // for(int i=0 ; i<10 ; i++){
    //     v.push_back(60);
    // }


    
    // v.clear();
    // v.push_back(50);
    // print(v);

    // v.pop_back();
    print(v);
}
 