#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

class Hero{

    private:
    int health;
    char level;
    char *name;

    public:

    Hero(){
        cout << "simple constructor called "<< endl;
        name = new char[100]; 
    }

    // Parameterised Constructor
    Hero(int health){
        // cout << "address of this is :"<<this<<endl;
        this -> health = health;
    }
    
    Hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }

    // Copy constructor
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this-> name = ch;
        cout << "copy constructor called" << endl;
        this-> health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout <<endl<<"[ Name : " << this -> name <<", ";
        cout <<"Health : "<< this -> health << ", ";
        cout <<"Level : "<< this -> level <<" ]";
        cout << endl << endl;
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

    void setName(char name[]){
        strcpy(this ->name,name);
    }

};

int main() 
{ 
    Hero hero1 ;
    hero1.setHealth(90);
    hero1.setLevel('A');
    char name[10] = "Kratik";
    hero1.setName(name);
    // hero1.print();

    Hero hero2(hero1);
    // hero2.print();

    cout << "changing the name"<<endl;
    name[0] = 'H';
    hero1.setName(name);
    hero1.print();

    cout << "After changing the name Because of we do Deep copy that is why name is not change but if we do shallow copy the name is changed"<<endl;
    hero2.print();

    // Assignment operators

    cout << "Calling Assignment operator" << endl;
    hero1 = hero2;

    hero1.print();


    hero2.print();



    
    return 0;

}