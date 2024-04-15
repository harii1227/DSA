#include <iostream>
#include <string.h>
using namespace std;

class Hero
{

private:
    int health;

public:
    char *name;
    char level;

    Hero(){
        cout<<"simple constructor called"<<endl;
        name=new char[100];
    }

    Hero(int health){
        // cout<<"this ->"<<this<<endl;
        this->health=health;
    }

    Hero(int health, char level){
        this->level=level;
        this->health=health;
    }

    //COPY CONSTRUCTOR

    // Hero(Hero& temp){
    //     this->health=temp.health;
    //     this->level=temp.level;
    // }

    void print() 
    {
        cout<<endl;
        cout<<"Name: "<<this->name<<" ,";
        cout << "health: " <<this->health<<" ,";
        cout<<"level " << this->level <<endl;
        cout<<endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }

    ~Hero(){
        cout<<"distructor called"<<endl;
    }
}; 
int main(){

    //statically
    Hero a;

    //dynamically
    Hero *b=new Hero();
    delete b;


    return 0;


}
