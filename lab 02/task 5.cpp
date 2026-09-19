#include<iostream>
using namespace std;
class calculator{
	private:
		float num1;
		float num2;

	public:

	void setDimensions(){
		cout << "Enter first number: ";
		cin >> num1;

		cout << "Enter second number: ";
		cin >> num2;
	}

	float add(){
		return num1 + num2;
	}

	float subtract(){
		return num1 - num2;
	}

	float multiply(){
		return num1 * num2;
	}

	float divide(){
		return num1 / num2;
	}
};

#include<iostream>
using namespace std;

int main(){

	calculator c;
	int choice;

	c.setDimensions();

	cout << "1. Addition\n";
	cout << "2. Subtraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cout << "Enter your choice: ";
	cin >> choice;

	if(choice == 1)
		cout << "Result = " << c.add();

	else if(choice == 2)
		cout << "Result = " << c.subtract();

	else if(choice == 3)
		cout << "Result = " << c.multiply();

	else if(choice == 4)
		cout << "Result = " << c.divide();

	else
		cout << "Invalid choice";

	return 0;
}
