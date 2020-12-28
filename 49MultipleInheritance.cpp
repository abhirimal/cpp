#include <iostream>

using namespace std;

class AcademicActivities{
	protected:
		int acaTotal;
		
	public:
		void GetTotalAca(){
			cout<<"Enter Academic Total Mark: "<<endl;
			cin>>acaTotal;
		}
	
	void DisplayAcaTotal(){
		cout<<"Academic Total Mark:"<<acaTotal<<endl;
	}
};

class ExtraAct{
	protected:
		float disciplineMark;
		float sportMark;
		
		public:
		void ReadExtraMark(){
			cout<<"Enter Discipline Mark: "<<endl;;
			cin>>disciplineMark;
			cout<<"Enter Sport mark: "<<endl;
			cin>>sportMark;
		}
		
		void DisplayExtraMark(){
			cout<<"Extra Total Mark Discipline: "<<disciplineMark;
			cout<<"Extra Total Mark Sports: "<<sportMark;

		}
};

class Result: public AcademicActivities, public ExtraAct{
	private:
		float total;
		
		public:
		void CalculateTotal(){
			total = disciplineMark + disciplineMark + sportMark;

		}
		
		void DisplayTotal(){
			cout<< "Total is "<<total<<endl;
		}
		
		
};	


int main(){
	
	Result r;
	
	r.GetTotalAca();
	r.ReadExtraMark();
	
	r.CalculateTotal();
	r.DisplayTotal();
	
	
	
	return 0;
}
