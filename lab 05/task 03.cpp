#include <iostream>
using namespace std;

class employee {
protected:
    string name;
    int salary;

public:
    employee(string n, int s) {
        name = n;
        salary = s;
    }

    void display_employee() {
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

class developer : public employee {
protected:
    string programming_language;

public:
    developer(string n, int s, string p)
        : employee(n, s) {   
        programming_language = p;
    }

    void display_developer() {
        cout << "Programming Language : " << programming_language << endl;
    }
};

class designer : public developer {
private:
    string design_tool;

public:
    designer(string n, int s, string p, string d)
        : developer(n, s, p) {   
        design_tool = d;
    }

    void display_designer() {
    	
        cout << " \nDesign Tool : " << design_tool << endl;
    }
};
int main(){
	developer d("Ali",1500,"C++");
	designer a("Ahmed",1000,"c++","tool");
	
	 cout << "\n--- Employee Info ---\n";
    d.display_employee();
    d.display_developer();
    
   
    a.display_designer();
    a.display_employee();
    

    return 0;

}
