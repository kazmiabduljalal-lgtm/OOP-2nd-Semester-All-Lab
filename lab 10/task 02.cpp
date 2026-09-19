#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("notes.txt");
	string line;
    int count = 0;

    if (!file) {
        cout << "File not found!" << endl;
        return 0;
    }

    while (getline(file, line)) {
        count++;
    }
    cout << "Total number of lines: " << count << endl;

    file.close();

    return 0;
}
