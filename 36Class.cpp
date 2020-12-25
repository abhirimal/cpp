#include <iostream>

using namespace std;

class Person{
	
	//data
	public:
	int id;
	string name;
	string address;
	double height;
	
	//function
	
	void getName() {
		cout<<"The name is "<<name;
	}
	
};


int main() {
	
	Person p;
	p.id =1;
	p.name = "Abhiyan";
	p.address = "Kathmandu";
	p.height = 6;
	
	p.getName();
	
	return 0;
}
