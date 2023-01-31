#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

class Hero{

    private:
    int health;
    char level;

    public:
    
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
        cout << "copy constructor called" << endl;
        this-> health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout <<"Health :"<< this -> health << endl;
        cout <<"Level : "<< this -> level << endl;
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

};

int main() 
{ 
    Hero H(70,'c');
    H.print();

    //copy constructor
    Hero S (H);
    S.print();
    return 0;
}