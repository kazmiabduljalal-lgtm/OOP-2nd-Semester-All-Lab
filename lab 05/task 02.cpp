#include <iostream>
using namespace std;

// PERSON CLASS
class person {
private:
    string name;
    int age;

public:
    void input_person() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
    }

    void display_person() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// EMPLOYEE CLASS
class employee : public person {
private:
    int employee_id;

public:
    void input_employee() {
        cout << "Enter your ID: ";
        cin >> employee_id;
    }

    void display_employee() {
        cout << "ID: " << employee_id << endl;
    }
};

// MANAGER CLASS
class manager : public employee {
private:
    string department;

public:
    void input_manager() {
        cout << "Enter your department: ";
        cin >> department;
    }

    void display_manager() {
        cout << "Department: " << department << endl;
    }
};

int main() {
    manager m;

    m.input_person();
    m.input_employee();
    m.input_manager();

    cout << "\n- Employee Details -\n";
    m.display_person();
    m.display_employee();
    m.display_manager();

    return 0;
}
