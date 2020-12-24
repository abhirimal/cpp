// WAP which displays the sum of each elements of 2*3 matrix

#include <iostream>

using namespace std;

int main() {
	
	int a[2][3];
	int sum = 0;
	
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			
			cout<<"Enter value for "<<i<<" "<<j<<" : ";
			cin>>a[i][j];
		}
	}
	
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
	
	sum = sum + a[i][j];
	

		}
	}
	
		cout<<"The sum is "<<sum;
	
	
	
	return 0;
}
