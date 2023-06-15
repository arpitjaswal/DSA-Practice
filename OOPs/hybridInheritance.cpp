#include <iostream>
using namespace std;

//hybrid inheritance

class Human{
    public:
        string name;
        int legs;

    void cry(){
        cout<<"I am crying bro"<<endl;
    }
};

class Ape: public Human{
    public:
        void dance(){
            cout<<"Dance like animals"<<endl;
        }
};

class livingbeings: public Human{
    public:
        bool aliveornot;
    
        void aliveornotbro(){
        cout<<"I am alive"<<endl;
        }
};

class Male:  public Ape, public livingbeings{
    public:
        int fur;

        void chauvinism(){
        cout<<"I am a male"<<endl;
        }
};



int main(){
    
    Male m;
    m.chauvinism();
    m.aliveornotbro();
    m.dance();


    return 0;
}