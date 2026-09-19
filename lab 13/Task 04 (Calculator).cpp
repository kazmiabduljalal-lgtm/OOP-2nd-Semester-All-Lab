#include<iostream>
using namespace std;

template < typename T>
class Calculator{
	
	private:
		T a,b;
		
	public:
		
	Calculator(T x, T y){
		a =x ;
		b = y;
	}
	
	T add(){
		return a + b;
	}
	
	T subtract(){
		return a - b;
	}
	
	T multiply(){
		return a * b;
	}
};

int main(){
	
	Calculator <int> c1(12,6);
	cout << " Add : " << c1.add() << " Sub : " << c1.subtract() <<" Multiply : " << c1.multiply() << endl;
	
	Calculator <double> c2(7.1, 5.3);
	cout << " Add : " << c2.add() << " Sub : " << c2.subtract() << " Multiply : " << c2.multiply() << endl;
	
	return 0;
}
