#include<iostream>
using namespace std;
 class Employee{
 	private:
 		int employeeID;
 		string employeeName;
 		static string companyName;
 	public:
 		Employee(int id, string name){
 			employeeID = id;
 			employeeName = name;
 			
		 }
		 
		static void displayCompanyInfo(){
		 	cout <<"Company :" << companyName << endl;
		 }
		 
		void displayEmployeeInfo(){
		 	cout << "Employee Name: " << employeeName << endl;
		 	cout << "Employee ID: " << employeeID << endl;
		 	cout << "Company Name: "  << companyName << endl;
		 }
		 
		static void setCompanyName(string name){
		 	companyName= name;
		 }
 };
 
        string Employee :: companyName = "Tesla " ;
        
int main(){
	Employee :: displayCompanyInfo();
	
	Employee E1(1001, "Micle");
	Employee E2(1002, "Jonathan");
	
	E1.displayEmployeeInfo();
	cout << endl;
	E2.displayEmployeeInfo();
	cout << endl;
	cout << "Change company name for all employee " << endl;
	
	Employee:: setCompanyName("Tesla AI");
	cout << endl;
	
	cout << "After changing company name: " << endl;
	E1.displayEmployeeInfo();
	cout << endl;
	E2.displayEmployeeInfo();
	cout << endl;
	return 0;
}
