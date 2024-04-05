#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
    string gf;
public:
    // double a;
    // double b;
    // char c;
    int id;
    int age;
    bool present;
    int nos;
    string name;

    Student(){
        cout<<"student ctor called"<<endl;
    }

    void study()
    {
        cout << "studying" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
    void bunk()
    {
        cout << "bunking" << endl;
    }
private:
    void chat(){
        cout<<"chatting"<<endl;
    }
};

int main()
{
    cout << sizeof(Student) << endl;
    Student s1;
    s1.name="Ramu"; 
    s1.age=12;
    s1.id=1;
    s1.nos=40;
    s1.present=0;
    Student s2;
    s2.name="Raman"; 
    s2.age=22;
    s2.id=4;
    s2.nos=400;
    s2.present=2;

    //    int a;
    //     int b;
    return 0;
}