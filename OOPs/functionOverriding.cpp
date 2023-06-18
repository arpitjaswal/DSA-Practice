#include <iostream>
using namespace std;


class Animal{
    public:
        virtual void bark()=0;
};

class Dog: public Animal{
    public:
        // void bark() override{
        //     cout<<"Dog is barking"<<endl;
        // }
        //C11+ extension, not required anymore
        void bark(){
            cout<<"Dog is barking"<<endl;
        }
};

int main(){
    Dog d;
    d.bark();
}