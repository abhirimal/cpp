// WAP which adds 2*3 matrix and display the sum

#include <iostream>

using namespace std;

int main() {
	
	int a[2][3];
	int b[2][3];
	int sum[2][3];
	
	cout<<"Enter data for first matrix" <<endl;
	
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			
			cout<<"Enter value for matrix a [ "<<i<<" ] [ "<<j<<" ] ";
			cin>>a[i][j];
		}
	}
	
	cout<<"Enter data for second matrix" << endl;
	
		for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			
			cout<<"Enter value for matrix b [ "<<i<<" ] [ "<<j<<" ] ";
			cin>>b[i][j];
		}
	}
	
	for (int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			
			sum[i][j] = a[i][j] + b[i][j];
			
		}
	}
	
	cout<<"The sum is "<< endl;
	
		for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			
			cout<<" [ "<<sum[i][j]<<" ] ";
			
		}
		cout<<endl;
	}

	
	
	
	return 0;
}
