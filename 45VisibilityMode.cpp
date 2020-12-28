#include <iostream>

using namespace std;

class Rect{
	private:
		int l;
		
		protected:
			int b;
		
		public:
			int p;
	
	void Calculate(){
		b=10;
		p=30;
	}
};

class Cube: public Rect{
	public:
	int cube;
	void Calculate(){
		b=10;
		p=30;
	}
};


int main(){
	
	Cube c;
	c.p = 10;
	c.cube = 10;
	
	return 0;
}
