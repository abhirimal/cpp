/* Loop: Process of repeating something

1. For Loop 
2. While Loop 
3. Do while loop

*/

//WAP that prints your name 5 times 

#include <iostream>

using namespace std;

int main() {
	
	string name;
	int i;
	
	cout<<"Enter your name"<<endl;
	cin>>name;
	
	for(i = 1; i<=5; i++) {
		
		cout<<"My name is "<<name<<endl;;
	}
		
		return 0;
	}
