#include <iostream>
using namespace std;

class Person{
	public:
	int id;
	string name;
	
	void ReadPersonData(){
		cout<<"Enter id: "<<endl;
		cin>>id;
		cout<<"Enter name: "<< endl;
		cin>>name;
	}
	
	void DisplayPersonData(){
		
		cout<<"Id is "<< id <<". Name is "<<name<<endl;
	}
};

class Student : public Person{
	int roll;
	
	public:
		void getRoll(){
			cout<<"Enter Roll no"<<endl;
			cin>>roll;
		}
		
		void DisplayRoll(){
			cout<<"Roll is "<< roll<<endl;
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
	e.ReadPersonData();
	e.ReadEmployeeData();
	e.DisplayPersonData();
	e.DisplayEmployeeData();
	


	return 0;
}
