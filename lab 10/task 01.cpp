# include <iostream>
# include <fstream>
using namespace std;
int main(){
	ofstream outfile("notes.txt", ios::in);
	outfile << "Line 1: Starting my first task of lab 10. " << endl;
	outfile << "Line 2: Its 8:35 PM on my PC. " << endl;
	outfile << "Line 3: Less start. " << endl;
	
	cout << "File Content After Writing" << endl;
	ifstream inFile("notes.txt");
	string line;
	while (getline(inFile, line)){
		cout << line << endl;
	}
	outfile.close();
	
	
	string name ="Abdul Jalal Kazmi";
	string rollNo = "2025-SE-41";
	
	ofstream appendFile("notes.txt", ios::app) ;
	if (!appendFile) {
		cout << "Error opening file for appending" << endl;
		return 1;
		
	}
	
	appendFile << "Name: " << name << endl;
	appendFile << "Roll Number: " << rollNo << endl;
	appendFile.close();
	
	cout << "File Content After Appending" << endl;
	ifstream finalFile("notes.txt");
	while (getline(finalFile,line)){
		cout << line << endl;
	}
	finalFile.close();
	return 0;
}
