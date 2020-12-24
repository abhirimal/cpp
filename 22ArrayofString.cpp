

#include <iostream>

using namespace std;

int main() {
	
	string name[5];
	
	for(int i=0; i<5; i++) {
		
		cout<<"Enter name of student "<<i<<endl;
		
		cin>>name[i];
	}
	
	
	
	
	
	for(int i=0; i<5; i++) {
		
		cout<<"The value of name"<< i << " is " << name[i]<<endl;
	}
	
	
	return 0;
	
}
