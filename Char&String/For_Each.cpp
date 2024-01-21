#include <iostream>
#include<vector>
using namespace std;

int main()
{
    string str = "ramann";
    for (auto ch : str)
    {
        cout << ch << " ";
    }

    vector<int> v;
    v.push_back(2);
    v.push_back(8);
    v.push_back(10);

    for(auto num: v){
        cout<<num<<" "; 
    }
    cout << endl;

    return 0;
}