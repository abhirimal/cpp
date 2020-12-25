#include <iostream>

using namespace std;

class Rectangle{
	
	public:
		int len;
		int bre;
		
			int CalculateArea(){
				return len * bre;
			}
			
			int CalculatePeremeter();
};

Rectangle::CalculatePeremeter(){
	return 2 * (len + bre);
}

int main(){
	
	Rectangle r;
	r.len = 10;
	r.bre = 20;
	
	cout<<r.CalculateArea()<<endl;
	cout<<r.CalculatePeremeter()<<endl;

	return 0;
}
