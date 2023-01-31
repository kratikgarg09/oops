#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class animal
{
public:
    int age;
    int weight;

public:
    void eat()
    {
        cout << " barking " << endl;
    }
};

class human
{
public:
    void eat()
    {
        cout << "eating" << endl;
    }
};

class Hybrid : public human, public animal
{
};

int main()
{
    Hybrid obj;
    obj.human :: eat(); // To resolve ambiquity use space resolution operator
    obj.animal :: eat();
    return 0;
}