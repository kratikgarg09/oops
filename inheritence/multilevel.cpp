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
    void bark()
    {
        cout << "barking" << endl;
    }
};

// Class of child class
class bullDog : public dog
{
public:
    void nickName()
    {
        cout << "vodaphone wala kutta " << endl;
    }
};

int main()
{
    bullDog d;
    d.age = 3;
    d.weight = 25;
    d.eat();
    d.bark();
    d.nickName();
    cout << "age and weight is " << d.age << " and " << d.weight << endl;
    return 0;
}