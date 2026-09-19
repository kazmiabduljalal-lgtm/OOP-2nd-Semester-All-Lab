#include<iostream>
using namespace std; // creating sutdent calss

class student {
public:
	string name;
	int rollNumber;
	float marks;
	 
	 void getData(){
	 	cout << " Enter the student name :" ;
	 	cin >> name;
	 	cout <<" Enter the student rollNumber : ";
	 	cin >> rollNumber;
	 	cout << " Enter the student marks :";
	 	cin >> marks;
	 }
	 void displayData(){
	 	cout << " Student name" << name << endl;
	 	cout << " student rollNumber : "<< rollNumber << endl;
	 	cout << " student marks : " << marks << endl;
	 }
};

int main(){
	student s1;

	s1.getData();
	s1.displayData();
	return 0;
}
