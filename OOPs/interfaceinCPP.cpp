#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void sound()=0;
};

class Dog: public Animal{
    public:
        void sound(){
            cout<<"Bhoo Bhoo"<<endl;
        }
};

class Sheep: public Animal{
    public:
        void sound(){
            cout<<"mehhhh"<<endl;
        }

};

int main(){
    //object A
    Dog d;
    d.sound();

    //object B
    Sheep s;
    s.sound();

    //trying to instantiate Animal class=NOT POSSIBLE
    //Animal a;


}