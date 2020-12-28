#include <iostream>

using namespace std;

class Rect{
	public:
		int len;
		int bre;
		
		Rect() {
			cout<<"This is constructor of Rect."<<endl;
		}
};

class Cube: public Rect{
	public:
		int hei;
		
		Cube(){
			cout<<"This is constructor of Cube."<<endl;
			
		}
};

int main(){
	Cube cb;
	
	
	return 0;
}
