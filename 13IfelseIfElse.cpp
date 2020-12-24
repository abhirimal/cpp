

#include <iostream>

using namespace std;

int main() {
	
	int day;
	
	cout <<"Enter no of day"<<endl;
	cin>> day;
	
	if(day ==1 ) {
		cout<< "Day is Sunday";
	}
	
	else if (day ==2) {
		cout<< "Day is Monday";
	}
	
	else if(day ==3 ) {
		cout<< "Day is Tuesday";
	}
	
	else if (day ==4) {
		cout<< "Day is Wednesday";
	}
	
	else if(day ==5 ) {
		cout<< "Day is Thursday";
	}
	
	else if (day ==6) {
		cout<< "Day is Friday";
	}
	
	else if(day ==7 ) {
		cout<< "Day is Saturday";
	}
	
	else {
		cout<< "Invalid Date ";
	}
	
	
	return 0;
}
