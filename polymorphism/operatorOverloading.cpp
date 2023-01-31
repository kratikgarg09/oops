#include <iostream>
using namespace std;

class A
{
public:
    int a,b;

public:
    int add(){
        return a+b;
    }

    void operator+(A &obj){
        // int value1 = this -> a;
        // int value2 = obj.a;
        // cout << "output : " << value2 - value1 << endl;

        cout << " Hello Kratik " << endl;
    }


    void operator() (){
        cout << "I am a bracket " << this -> a << endl; 
    }
};

int main()
{
    A obj1,obj2;
    obj1.a = 4;
    obj2.a = 8;
    obj1+obj2;
    obj2();
    return 0;
}