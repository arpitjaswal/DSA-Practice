#include <iostream>
using namespace std;

class Animal{
    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};

class Dog: public Animal{
    
};

class breedwalakutta: public Dog{

};  

int main(){
    breedwalakutta b;
    b.speak();
}