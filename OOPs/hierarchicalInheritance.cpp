#include <iostream>
using namespace std;

class A{

    public:
    string name;

    void cry(){
        cout<<"Crying"<<endl;
    }
};

class B: public A{

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class C: public A{

    public:
    void laugh(){
        cout<<"Laughing"<<endl;
    }
};

int main(){

    A a;
    a.cry();
    cout<<a.name<<endl;
    
    B b;
    b.cry();
    b.bark();

    C c;
    c.cry();
    // c.bark();
    c.laugh();
    return 0;
}