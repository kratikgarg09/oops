#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class human
{
public:
    string color;
    int age;
    int height;
    int weight;

    string getColor()
    {
        return this->color;
    }
    void setColor(string humanColor)
    {
        this->color = humanColor;
    }

    int getAge()
    {
        return this->age;
    }
    void setAge(int a)
    {
        this->age = a;
    }

    int getWeight()
    {
        return this->weight;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }

    int getHeight()
    {
        return this->height;
    }
    void setHeight(int h)
    {
        this->height = h;
    }
};

class male : public human
{
public:
    void sleep(){
        cout << " man is sleeping" << endl;
    }
};

int main()
{
    male obj;
    obj.setAge(19);
    obj.setWeight(67);
    obj.setHeight(165);
    obj.setColor("wheatish");

    cout << "color : " << obj.getColor() << endl;
    cout << "Age : " << obj.getAge() << endl;
    cout << "Weight : " << obj.getWeight() << endl;
    cout << "Height : " << obj.getHeight() << endl;
    
    
    return 0;
}