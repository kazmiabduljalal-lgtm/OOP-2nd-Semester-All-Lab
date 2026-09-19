#include <iostream>
using namespace std;
class product{
	private:
	string name;
	double price;
	int quantity;
	
	public:
	// setters for all fields
	
	void setName (string n){
		if (!n.empty()){
			name = n;
		}else
		cout << " Invalid name. Name cannot be empty ";
	}	
	void setprice ( double p){
		if (p > 0 ){
			price = p;
		}
		else 
		cout << " Invalid price. Price must grater than zero.";
	}
	void setquantity (int q){
		if ( q >= 0){
		quantity = q;}
		else
		cout << " quantity cannot be negative.";
	}
	
	// Getters for all 
	string getName(){
		return name;
	}
	double getprice(){
		return price;
	}
	int getquantity(){
		return quantity;
	}
	
};
int main()
{
	product p;
	p.setName(" Laptop");
	p.setprice(7899);
	p.setquantity( 4);
	 
	cout << " Product name " << p.getName() << endl;
	 cout << " Product Price " << p.getprice() << endl;
	 cout << " Product quantity " << p.getquantity() << endl;
	 
	 return 0;
}
