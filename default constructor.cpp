#include<iostream>
using namespace std;
class Employee
{
	int empId;
	string name;
	float salary;
	public:
		Employee()
		{
			empId=1001;
			name="harsh";
			salary=35000;
			
		}
		void display()
		{
			cout<<"Employee ID:"<<empId<<endl;
			cout<<"Employee Name:"<<name<<endl;
			cout<<"Employee Salary:"<<salary<<endl;
		}
};

int main()
{
	Employee e1;
	e1.display();
	return 0;
}