#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Parent class
class animal
{
public:
    int age;
    int weight;

public:
    void eat()
    {
        cout << " eating " << endl;
    }
};


// Child class
class dog : public animal
{
public:
    void bark(){
        cout << "barking" << endl;
    }
};

int main()
{
    dog d;
    d.age = 3;
    d.weight = 25; 
    d.eat();
    d.bark();
    cout << "age and weight is" << d.age << " and " << d.weight << endl;
    return 0;
}