#include <iostream> 

using namespace std;

class Rectangle{
	
	private:
		int len;
		int bre;
		
	public:	
		 Rectangle(int l, int b){
			this->len =l;
			this->bre =b;
		}
		
		void Area() {
			cout<<"The area is "<<(len*bre)<<endl;
		}
};


int main() {
	
	Rectangle r(10,20);
	Rectangle ra(20,40);
	
	r.Area();
	ra.Area();
	
		return 0;
}
