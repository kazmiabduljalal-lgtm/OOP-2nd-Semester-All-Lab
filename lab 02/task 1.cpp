#include<iostream>
using namespace std;

class student{
    public:
        string firstname , lastname;
        int rollNumber;
        float marks;

        void getData(){
            cout << "Enter your first name : ";
            getline(cin, firstname);
            cout << "Enter your last name : ";
            getline(cin, lastname);

            cout << "Enter your roll number :";
            cin >> rollNumber;

            cout << "Enter your marks: ";
            cin >> marks;
        }
        void displayData(){
            cout << "The name of student is: " << firstname <<" "<< lastname << endl;
            cout << "The roll number of student is: " << rollNumber << endl;
            cout << "The marks of student is: " << marks << endl;
        }
};

int main(){
    student s;     // Create object

    s.getData();   // Call function
    s.displayData();

    return 0;
}
