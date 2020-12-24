// WAP in C++ that takes 7 subject marks, and print average




#include <iostream>

using namespace std;

int main() {
	
	int num=7;
	int marks[7];
	int sum =0;
	int avg;
	
	for(int i=0; i<7; i++) {
		
		cout<<"Enter marks of subject "<< i <<endl;
		cin>> marks[i];
	}
	
	for(int i=0; i<7; i++) {
		
		sum=sum + marks[i];
	}
	
	avg = sum/num;
	
	cout<< "Average mark is " << avg;
	
	return 0;
}
