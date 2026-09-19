#include <iostream>
using namespace std;
class temperature{
	
	public:
		
		int temp;
		
		
		float conv();
		void setDimensions();
};
void temperature::setDimensions(){
	cout << " Enter Temperature in Celcious : ";
	cin >> temp;
}
float temperature::conv(){
	return (9.0/5)*temp + 32;
}
int main()
{
	temperature t;
	t.setDimensions();
	cout << " The Temperature in Fahrenheit = " << t.conv();
	return 0;
}
