#include <iostream>
using namespace std;
struct student{
	string first_name, last_name;
	int marks, roll_number;
	void displaystudentinfo(){
	cout << " Student Name : " << first_name << " " << last_name << endl;
	cout << " Student Roll No : " << roll_number << endl;
	cout << " Student Marks : " << marks;
	cout << endl << "           ===== " << endl;

	}

};student s1,s2,s3;
int main(){
	int n;
	cout << " Enter the number of the student : ";
	cin >> n;
	student students[n];
	for (int i = 0; i < n; i++ ){
		cout << " Enter the details of the student " << i + 1 << endl;
		cout << " Enter first name : ";
		cin >> students[i].first_name;
		cout << " Enter last name : ";
		cin >> students[i].last_name;
		cout << " Enter Roll No : ";
		cin >> students[i].roll_number;
		cout << " Enter your marks : ";
		cin >> students[i].marks;	
	}
	for (int i = 0; i < n; i++) {
        students[i].displaystudentinfo();
    }

    return 0;
}
	
