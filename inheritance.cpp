#include <iostream>
class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a Vehicle\n";
    }
};
class Car:public Vehicle{
};
int main() {
    car obj;// Write C++ code here
    return 0;
}