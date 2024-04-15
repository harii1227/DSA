#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;

    Hero(){
        cout<<"constructor called"<<endl;
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

    Hero(Hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }

    void print() 
    {
        cout << "health " <<this->health<< endl;
        cout<<"level " << this->level <<endl;
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
};
int main()
{
    Hero S(70,'c');
    S.print();


//COPY CONSTRUCTOR  
    Hero R(S);
    R.print();
   











    // //object create statically
    // // cout<<"Hi"<<endl;
    // Hero raman(10);
    // // cout<<"address of raman : "<<&raman<<endl;
    // raman.print();


    // // cout<<"Hello"<<endl;
    // //dynamically
    // Hero *h=new Hero;
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();



}