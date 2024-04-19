#include<iostream>
using namespace std;

struct student{
    int roll;
    string name;
    int age;

    void studentDetails(){
        cout<<"roll is : "<<roll<<endl;
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        
    }


};

int main(){
    student prince; //we can use struct before student 
    prince.roll=44;
    prince.name="raman";
    prince.age=21;
    
    
    student aman={44,"aman",21};

    prince.studentDetails();
    cout<<endl;

    aman.studentDetails();
    cout<<endl;

    // cout<<prince.age<<" "<<prince.name<<endl;

    return 0;
}