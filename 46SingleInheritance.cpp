// Program didnot work as expected 


#include <iostream>

using namespace std;

class Person{
	protected:
	int id;
	string name;
	
	void ReadPersonData(){
		cout<<"Enter id: "<<endl;
		cin>>id;
		cout<<"Enter name: "<< endl;
		cin>>name;
	}
	
	void DisplayPersonData(){
		
		cout<<"Id is "<< id <<"Name is "<<name<<endl;
	}
};

class Employee : public Person{
	private:
	string post;
	double salary;
	
	public:
	void ReadEmployeeData(){
		cout<<"Enter Post: "<<endl;
		cin>>post;
		cout<<"Enter Salary: "<< endl;
		cin>>salary;
	}
	
	void DisplayEmployeeData(){
		
		cout<<"Post is "<< post <<". Salary is "<< salary <<endl;
	}
};

int main(){
	Employee e;
	e.ReadEmployeeData();
	e.DisplayEmployeeData();
	
	return 0;
}
