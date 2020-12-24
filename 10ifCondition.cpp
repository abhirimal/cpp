#include <iostream>

using namespace std;

int main() {
	
	int age;
	
	cout<<"Please Enter your age "<<endl;
	
	cin>>age;
	
	if(age>=16) {
		cout<<"You are a voter. "<<endl;
		
		if(age == 16) {
			cout<< "We welcome our new voter. "<<endl;
		}
			}
			
			else{
				cout<<"You are not a voter. ";
			}
			
			return 0;
}
