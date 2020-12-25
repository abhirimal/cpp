//WAP to find area of constructor 

#include <iostream>

using namespace std;

class Rectangle{
	
	public:
	int len;
	int bre;
	
	Rectangle(int l=1,int b=1){
		this->len = l;
		this->bre = b;
	}
	
	Rectangle(Rectangle &r){     
			
		len = r.len;
		bre = r.bre;
	}
	
	void getArea(){
		cout<<"The area is "<<(len*bre);
	}
	
};

int main(){
	
	Rectangle r1(5,1);
	Rectangle r2(r1);   //r2 is copy constructor
	 
	r1.getArea();	
	
	return 0;
}
