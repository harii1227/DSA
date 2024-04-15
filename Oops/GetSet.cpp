#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
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
    Hero raman;







    // //static allocation
    // Hero a;
    // cout<<"level is "<<a.level<<endl;
    // cout<<"health is "<<a.getHealth()<<endl;
    // //dynamically
    // Hero *b=new Hero;

    // b->setLevel('A');
    // b->setHealth(70);

    // cout<<"level is "<<(*b).level<<endl;
    // cout<<"health is "<<(*b).getHealth()<<endl;

    // cout<<"Level is "<<b->level<<endl;
    // cout<<"health is "<<b->getHealth()<<endl;








    // Hero raman;
    // // cout<<"size of : "<<sizeof(raman)<<endl; due to padding size becomes 8 but
    // // we see that there is one int and one char so size should be 4+1=5
    // cout << "raman health is ; " << raman.getHealth() << endl;
    // // cout<<"raman level is : "<<
    // raman.setHealth(70);
    // // raman.health=30;
    // raman.level = 'A';
    // cout << "health is: " << raman.getHealth() << endl;
    // cout << "level is: " << raman.level << endl;
    // return 0;
}
