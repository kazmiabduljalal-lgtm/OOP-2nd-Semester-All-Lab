#include<iostream>
using namespace std;

class Product {
	protected:
		string name;
		double price;
		
	public:
		Product(string n, double p){
			name = n;
			price = p;
		}
		
		void display() {
			cout << "Name : " << name << endl;
			cout << "Price : " << price << endl;
		}
};


class Electronics : public Product {
	private:
		int warrantyYears;
	public:
		Electronics(string n, double p, int w) : Product (n,p){
			warrantyYears = w;
		}
		void display(){
			Product::display();
			cout << "Warranty Years : " << warrantyYears << endl;
		}
};

int main(){
	Electronics E("laptop", 1999, 04);
	E.display();
	
	return 0;
}



