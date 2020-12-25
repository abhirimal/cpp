// WAP in C++ to create employee class and add field id, name, salary and create function that calculate 1 year salary.

#include <iostream>

using namespace std;

class Employee{
	
	private:
		int id;
		string name;
		double salary;
		
		public:
			Employee(int id, string name, double salary){
				
				this->id =id;
				this->name = name;
				this->salary = salary;
			}
		
		double CalculateAnnualSalary(){
			return salary*12;
			
			
		}
		
};

int main() {
	
	Employee e(1, "Abhiyan", 50000);
	cout<< e.CalculateAnnualSalary();
	
	
	return 0;
}
