#include<iostream>
using namespace std;
template <typename T>

class Pair {
	private:
		T first, second;
	
	public:
		Pair(T x, T y) {
			first = x;
			second =y;
		}
		
		T getFirst(){
			return first;
		}
		
		T getSecond(){
			return second;
		}
		
		void display() {
		cout << "First : " << first << ", Second : " << second << endl ;
		}
			
}; 

int main(){
	Pair <int> p1(4, 7);
	Pair <string> p3("Wow ", "Nice ");
	Pair <double> p2(4.4, 5.5);

	p1.display();
	p2.display();
	p3.display();
	return 0;
}
