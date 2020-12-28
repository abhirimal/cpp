#include <iostream>

using namespace std;

class Rect{
	public:
		int len;
		int bre;
		
		Rect() {
			cout<<"This is constructor of Rect."<<endl;
		}
		
		Rect(int l, int b){
			cout<<"This is pconstructor of Rect."<<endl;
			len =l;
			bre =b;
		}
};

class Cube: public Rect{
	public:
		int hei;
		
		Cube(){
			cout<<"This is constructor of Cube."<<endl;
			}
			Cube(int h, int l, int b) :Rect(l,b){
				hei = h;
			}
			
			void CubeCalculate() {
				cout<<"The volume is "<<len*bre*hei;
			}
		
};

int main(){
	Cube c(10, 20, 30);
	c.CubeCalculate();
	
	
	return 0;
}
