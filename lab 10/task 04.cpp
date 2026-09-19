#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("students.txt");

    file << "Rohail 01" << endl;
    file << "Absar 02" << endl;
    file << "Alia 03" << endl;

    file.close();

    cout << "Student data written successfully.\n" << endl;
    
    ifstream readFile("students.txt");

    string name;
    int rollNo;

    cout << " Details:\n" << endl;

    while (readFile >> name >> rollNo) {

        cout << "Name : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << endl;
    }

    readFile.close();

    return 0;
}
