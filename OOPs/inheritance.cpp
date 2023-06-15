#include <iostream>
#include <string>
using namespace std;

class Human{
    public:
        int eyes;
        string name;
        int children;

        string getName(){
            return name;
        }

        void setName(string n){
            this->name = n;
        }
};


class Female: public Human{
    private: 
        int glands;
        string na;

    public:
        void setGlands(int g){
            this->glands=g;
        }

        int getGlands(){
            return glands;
        }
        string getNa(){
            return na;
        }
};

int main(){
    Female f;
    f.setGlands(34);
    f.setName("Arpit");
    cout<<f.getGlands()<<endl;
    cout<<f.eyes<<endl;
    cout<<f.children<<endl;
    cout<<f.name;
    f.getNa();
    return 0;
}