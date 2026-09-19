#include<iostream>
using namespace std;

class Box{
	private:
		int length;
	
	public:
		Box(int L) {
			length = L;
		}
        friend void displayLength(Box B1);

};
      
        void displayLength(Box B1){
      	cout << B1.length << endl;
	  }
int main(){
	Box B1(90);
	displayLength(B1);
	return 0;
}
