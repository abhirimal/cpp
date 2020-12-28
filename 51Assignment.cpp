//Inheritance Assignment

#include <iostream>

using namespace std;

class Employee{
	protected:
		int id;
		string name;
		
		public:
		Employee(int i, string n){
			id = i;
			name = n;
		}
		
		void DisplayEmp(){
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<name<< endl;
		}
};

class ParttimeEmployee: public Employee{
	private:
		double wages;
	public:
		ParttimeEmployee(int i, string n, double w): Employee(i,n){
			wages = w;
		}
		
		void DisplayWage(){
			cout<<"The wages is "<<wages;
		}
};


class FulltimeEmployee: public Employee{
	private:
		double salary;
		
	public:
		FulltimeEmployee(int i, string n, double s ) : Employee(i,n){
			salary = s;
		}
		
		void DisplaySalary(){
			cout<<"The salary is "<<salary;
		}
};

int main(){
	FulltimeEmployee e1(1, "Abhiyan", 50000);
	ParttimeEmployee p1(2, "Raju", 1500);
	
	e1.DisplayEmp();
	e1.DisplaySalary();
	
	p1.DisplayEmp();
	p1.DisplayWage();
	
	return 0;
}
