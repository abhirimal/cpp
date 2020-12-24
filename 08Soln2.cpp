#include <iostream>

using namespace std;



int main() {
	
	double r;
	double PI=3.14;

	
		
	cout<<"Enter radius of circle : "<<endl;
	
	cin>>r;
	
	double area= PI* r *r;   // if i use it before cout it doesnot work
	
	cout<<"The area of circle is "<< area;
	
	return 0;
	
	
}
