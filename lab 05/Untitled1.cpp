#include <iostream>
using namespace std;
class studen{
	private:
		string name;
		int id;
		public:
			studen(){
				cout << " enter your name : ";
				cin >> name;
				cout << " Enter your id : ";
				cin >> id;
			}
			void disp(){
				cout << " Name : " << name << endl;
				cout << " id : " << id << endl;
				
			}
};
int main(){
	studen s;
	s.disp();
	return 0;
}
