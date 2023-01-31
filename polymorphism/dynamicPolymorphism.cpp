#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "speaking " << endl;
    }
};

class Dog : public Animal
{
public:
    void speak(){
        cout << " Barking " << endl;
    }
};

class babyDog : public Animal{
    public:
    void speak() {
        cout <<" weeping "<< endl;
    }
};

int main()
{
    Dog d;
    d.speak();
    babyDog b;
    b.speak();
    return 0;
}