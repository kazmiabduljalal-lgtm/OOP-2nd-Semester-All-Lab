#include<iostream>
using namespace std;

class Vehicle {
	public:
		Vehicle(){
			cout<< "Vehicle constructor " << endl;
		}
};

class Car : public Vehicle {
	public:
		
		Car(){
		cout << "Car constructor " << endl;
	}
};

class Electric_car : public Car{
	public:
		
		Electric_car() {
		cout << "ElectricCar constructor " << endl;
	}
};

int main() 
{
	Electric_car C;
	
	return 0;
}
