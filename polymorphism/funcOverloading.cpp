#include <iostream>
using namespace std;

class A
{
public:
    void sayHello(){
        cout << " Hello Kratik " << endl;
    }

    void sayHello(string name){
        cout << "Hello " << name << endl;
    }

    void sayHello(char name,int n = 0){
        cout << "Hello " << name << endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello("mohit");
    obj.sayHello('m');
    return 0;
}