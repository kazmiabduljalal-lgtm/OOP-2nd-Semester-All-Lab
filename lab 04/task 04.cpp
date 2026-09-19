#include <iostream>
using namespace std;

class Locker{
	public:
		Locker(){
			cout << "locker allocated to customer. " << endl;
		}
		
		~Locker() {
			cout << "locker returned by customer." << endl;
		}
};


int main (){
	
{	Locker L1;
}
	
	Locker* L2 = new Locker();
	delete L2;
	
	return 0;
}
