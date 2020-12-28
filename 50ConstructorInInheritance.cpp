#include <iostream>

using namespace std;

class Base{
	public:
		Base(){
			cout<<"This is default ctor of base"<<endl;
		}
		
		Base(int a){
			cout<<"This is parm ctor of base"<<endl;
		}
};

class Derived: public Base{
	public:
		Derived(){
			cout<<"This is default ctor of Derived"<<endl;
		}
		
		Derived(int a): Base(a){
			cout<<"This is parm ctor of Derived"<<endl;
		}
};



int main(){
	
	Derived d(1);
	
	return 0;
}
