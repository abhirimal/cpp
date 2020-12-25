#include <iostream>

using namespace std;

int main() {
	
	
	cout<<"Enter Number"<<endl;
	int n;
	int fact = 1;
	cin>>n;
	
	for(int i=n; i>0; i--) {
		
		fact = fact*i;
		
	}
	
	cout<<"The fact is " << fact;
	
	return 0;

