#include <iostream>

using namespace std;

int main() {
	
	int day;
	
	cout<<"Enter number of day"<<endl;
	cin>>day;
	
	switch(day){
		
		case 1:
			cout << "Day is Sunday";
			break;
			
		case 2:
			cout << "Day is Monday";
			break;
			
		case 3:
			cout << "Day is Tuesday";
			break;
			
		case 4:
			cout << "Day is Wednesday";
			break;
			
		case 5:
			cout << "Day is Thursday";
			break;
			
		case 6:
			cout << "Day is Friday";
			break;
			
		case 7:
			cout << "Day is Saturday";
			break;
			
		default:
			cout << " Invalid day ";
			break;
	}
		
	return 0;
}
