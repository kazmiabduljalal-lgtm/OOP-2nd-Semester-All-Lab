#include<iostream>
using namespace std;

class BankAccount{
	private:
	string accountHolderName;
	double balance;
	
	public:
		
		BankAccount(string n, double b){
			accountHolderName = n;
			balance = b;
		}
		
		void display(){
			cout << "Account Details" << endl;
			cout << "Account Holder: " << accountHolderName << endl;
			cout << "Total Balance: " << balance << endl;
			
		}
		
		static int totalAccounts;
		
		
	
		
};

int BankAccount :: totalAccounts = 02;

int main(){
	
	BankAccount a1("Mical", 1499);
	cout << " No : 01" << endl;
	a1.display();
	cout << endl;
	BankAccount a2("Jack", 2000);
	cout << " No : 02 " << endl;
	a2.display();
	cout << endl;
	cout << " Total Numbers of Accounts : " << BankAccount:: totalAccounts<< endl; 
	
	return 0;
}
