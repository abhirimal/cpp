// give 10% discount if cart value is more than 1000

#include <iostream>

using namespace std;

int main() {
	
	double price= 900;
	double finalprice;
	
	
	if(price>=1000) {
		
		double discount = price * 10 /100;
		finalprice = price - discount;
		
		cout<<"Your final price is "<<finalprice<<endl;
	}
	
	else{
		
		finalprice = price;
		cout<<"Your final price is " << price;
	}
	
	
	return 0;
}
