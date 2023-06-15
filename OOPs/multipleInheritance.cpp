#include <iostream>
using namespace std;

class Animal{
    public:
        void bark(){
            cout<<"Barking"<<endl;
        }
};

class Human{
    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};

class android: public Animal, public Human{
   
};

int main(){
    android a;
    a.speak();
    a.bark();
}