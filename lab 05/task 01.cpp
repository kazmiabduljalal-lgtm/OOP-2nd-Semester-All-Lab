#include <iostream>
using namespace std;
// person class
class person{
	public:
		string name;
		int age;
		// taking input from user
		void input_person(){
			cout << " Enter your name : ";
			cin >> name;
			cout << " Enter your age : ";
			cin >> age;
		}
		void display_person_info(){
			cout << " Name : " << name << endl;
			cout << " Age : " << age << endl;
		}
};
class student : public person{
public:
	int student_id;
	void input_stud(){
		cout << " Enter your Id : ";
		cin >> student_id;
	}
	void display_student_info(){
		cout << " The Id of the student is : " << student_id << endl;
	}
	
};
int main(){
	student S1;
	S1.input_person();
	S1.input_stud();
	S1.display_person_info();
	S1.display_student_info();
	
	return 0;
}
