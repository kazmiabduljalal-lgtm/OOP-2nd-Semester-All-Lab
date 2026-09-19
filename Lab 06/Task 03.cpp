#include<iostream>
using namespace std;

class File{
	public:
		File(){
			cout << "File opened" << endl;
		}
		
		 ~File(){
			cout << "File closed" << endl;
		}
};

class Text_file : public File{
	public:
		Text_file(){
			cout << "Text_file opened" << endl;
			
		}
		
		~Text_file(){
			cout << "Text_file closed" << endl;
		}
};

int main()
{
	Text_file T;
	
	return 0;
}
