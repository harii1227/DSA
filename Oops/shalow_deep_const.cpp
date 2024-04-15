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
        cout<<"constructor called"<<endl;
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
};
int main(){

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7]="Raman";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor
    Hero hero2(hero1);
    // hero2.print();
    hero1.name[0]='G';
    hero1.print();
    hero2.print();

    hero1=hero2;
    hero1.print();
    hero2.print();


}