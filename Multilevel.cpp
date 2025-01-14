#include <iostream>
using namespace std;

class Vehicle {
    public:
        Vehicle() {
            cout << "This is Vehicle" << endl; 
        }
};
class FoureWheeler : public Vehicle
{
    public:
        FoureWheeler() {
            cout << "This is Four Wheeler class" << endl;
        }
};
class Car: public FoureWheeler {
    public:
        Car(){
            cout << "This is Car class" << endl ;
        }
};

int main (){
    Car obj;
    return 0;
}
