#include <iostream>
using namespace std;
class rectangle{
	public:
		int length;
		int width;
		
		
		void setDimensions();
		double area();
		int peremeter();
};

void rectangle::setDimensions(){
	cout << " Enter the length : ";
	cin >> length;
	cout << " Enter the width : ";
	cin >> width;
	
}
double rectangle::area(){
	return length * width;
}
int rectangle::peremeter(){
	return 2 *(length + width );
	
}
int main(){
	rectangle r;
	r.setDimensions();
	cout << " Area of Rectangle : " << r.area() << endl;
	cout << " Perimeter of Rectangle : " << r.peremeter() << endl;
	return 0;
}
