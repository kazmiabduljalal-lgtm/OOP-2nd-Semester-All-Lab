#include<iostream>
using namespace std;
template <typename T>

T findMin(T a, T b) {
	return ( a < b ) ? a:b;
}

int main(){
cout << "Min int :" << findMin(10,3) << endl;
cout << "Min char :" << findMin('e','s') << endl;
cout << "Min double :" << findMin(6.5, 4.0) << endl;

 return 0;

}
