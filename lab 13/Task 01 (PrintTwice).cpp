#include<iostream>
using namespace std;

template <typename T>
void printTwice(T val){
	cout << val << endl;
	cout << val << endl;
}

int main(){
	cout << " Print Twice " << endl;
	printTwice(5);
	printTwice(10.3);
	printTwice(string("wow"));
	
	return 0;
}
