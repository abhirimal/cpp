//WAP to calculate area of d cirle

#include <iostream>

using namespace std;

class Circle{
	public:
		double radius;
		
		double findArea(){
			double area = 3.14 * this->radius * this->radius;
			return area;
		}
};




int main(){
	
	Circle c1, c2, c3;
	c1.radius = 6.5;
	c2.radius = 2;
	c3.radius = 5.0;
	
	double areaofc1 = c1.findArea();
	cout<<"The area of c1 is " <<areaofc1;


	return 0;
}
