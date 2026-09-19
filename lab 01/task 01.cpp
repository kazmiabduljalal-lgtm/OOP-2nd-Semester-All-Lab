#include<iostream>
using namespace std;
struct student{
	string first_name, last_name;
	int roll_number, marks;
	void displaystudentinfo(){
		cout << endl << "   ======= " << endl;
		cout << " Name : " << first_name << " " << last_name << endl;
		cout << " Roll No : " << roll_number << endl;
		cout << " marks : " << marks << endl;
	}
};student s1, s2;

int main(){
	
	// for first student
	
	s1.first_name = " Ali ";
	s1.last_name = " Ahmed ";
	s1.roll_number = 01;
	s1.marks = 45;
	s1.displaystudentinfo();
	
	// for second student
	
	s2.first_name = " Zain ";
	s2.last_name = " Mughal ";
	s2.roll_number = 02;
	s2.marks = 47;
	s2.displaystudentinfo();
	
	return 0;
}
