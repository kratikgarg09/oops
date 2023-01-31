#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << " barking " << endl;
    }
};

class human
{
public:
    void eat()
    {
        cout << "eat" << endl;
    }
};

class Hybrid : public human, public animal
{
};

int main()
{
    Hybrid obj;
    obj.eat();
    obj.bark();
    return 0;
}