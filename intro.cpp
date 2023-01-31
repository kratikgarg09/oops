#include <iostream>
using namespace std;
class Hero
{
    // properties
    private:
    int health;
    char level;

    public:

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

};
int main() 
{ 



    // object created statically
    Hero h1(78);
    // cout << "address of h1 is :"<< &h1 <<endl;
    h1.print();
    // object created dinamically
    Hero *h2 = new Hero;
    h2 -> print();

    Hero h3(78,'n');
    h3.print();


   /* 
    // statically creatiing the object
    Hero a;
    a.setHealth(90);
    a.setLevel(67);
    cout << "health of a is :" << a.getHealth() << endl;
    cout << "health of a is :" << a.getLevel() << endl;
    
    // dynamically creatiing the object
    Hero *b = new Hero;
    b -> setHealth(70);
    b -> setLevel(68);
    cout << "health of a is :" << b -> getHealth() << endl;
    cout << "health of a is :" << b -> getLevel() << endl;
    */


    // //Creation of object 
    // Hero ramesh;

    // //use of setter
    // ramesh.setHealth(90);
    // ramesh.setLevel(80);

    // //use of getter
    // cout << "Health of ramesh is : "<< ramesh.getHealth()<<endl;
    // cout << "Level of ramesh is : "<< ramesh.getLevel()<<endl;
    
    

    // cout << "size :"<< sizeof(ramesh);

    return 0;
}