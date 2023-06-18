#include <iostream>
using namespace std;


class Calculate{

    public:
        int square(int n){
            return n*n;
        }
        double square(double n){
            return n*n;
        }
};

int main(){
    Calculate c;
    cout<<"Square of 4 is: "<<c.square(4)<<endl;
    cout<<"Square of 4.4 is: "<<c.square(4.4)<<endl;
    return 0;
}