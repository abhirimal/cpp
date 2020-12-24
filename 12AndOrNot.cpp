// give 10% discount if cart value is more than 1000 and city is ktm

#include <iostream>

using namespace std;

int main() {
	
	double price;
	double finalprice;
	string location;
	
	cout<<"Enter your price"<<endl;
	cin>>price;
	
	cout<<"Enter your city"<<endl;
	cin>>location;
	
	
	if(price>=1000 && location == "ktm") {
		
		double discount = price * 10 /100;
		finalprice = price - discount;
	}
	
	else{
		
		finalprice = price;
		
	}
	
	cout<<"Your final price is " << finalprice;
	
	
	return 0;
}
