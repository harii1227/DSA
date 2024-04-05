#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
    string gf;

public:

    int id;
    int age;
    bool present;    
    string name;
    int nos;
    

    // default constructor  assign garbage value
    Student()
    { // constructor=
        cout << "student ctor called" << endl;
    }
    //parameterized constructor
    Student(int _id, int _age, bool _present, string _name, int _nos,string _gfname)
    {
        id = _id;
        age = _age;
        present = _present;
        name= _name;
        nos = _nos;
        gf= _gfname;
        cout << "student parameterized ctor called" << endl;
    }
    //parameterized constructor
    Student(int _id, int _age, bool _present, string _name, int _nos)
    {
        id = _id;
        age = _age;
        present = _present;
        name= _name;
        nos = _nos;
        
        cout << "student parameterized without gf ctor called" << endl;
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
    void chat()
    {
        cout << "chatting" << endl;
    }
};

int main()
{
    // cout << sizeof(Student) << endl;
    Student s1;
    Student s2(1,12,1,"chhota bheem", 1, "chutki");
    cout<<s2.name<<endl;
    cout<<s2.id<<endl;
    Student s3(2,13,0,"lokesh" , 5);
    cout<<s3.name<<endl;
    // cout << s1.age << endl;
    return 0;
}