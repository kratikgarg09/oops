#include <iostream>
using namespace std;
class Hero
{
    // properties
    private:
    int health;
    char level;

    public:
    static int timeToComplete;
    // parameterised constructor

    Hero(int health){
        // cout << "address of this is :"<<this<<endl;
        this -> health = health;
    }
    
    Hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }

    Hero() {
        cout << "constructor called"<<endl;
    }
    
    void print(){
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char l){
        level = l;
    }
    ~Hero() {
        cout << "Destructor called" << endl;
    }

    static int random(){
        return timeToComplete;
    }
};

int Hero :: timeToComplete = 5;

int main()
{
    // cout << Hero :: timeToComplete << endl;
    cout << Hero::random() << endl;

    // // static
    // Hero h1;

    // // Dynamic
    // Hero *h2 = new Hero;
    // delete h2;



    return 0;


}