#include <iostream>
using namespace std;

class voter{
	public:
		string name;
		int age;
		bool elegible();
		void setDimensions();
};
void voter:: setDimensions(){
	cout << " Enter your name : ";
	cin >> name;
	cout << " Enter your age : ";
	cin >> age;
}
bool voter::elegible(){
	return age>=18;
}
int main()
{
	voter v;
	v.setDimensions();
	if ( v.elegible())
		cout << " You are eligible to vote ";
	else
	cout <<" You are not eligible to vote ";
	return 0;
}
