#include<iostream>
using namespace std;
class Employee
{
	int employeeId;
	string name;
	float salary;
	public:
		Employee(int id,string n,float s)
		{
			employeeId=id;
			name=n;
			salary=s;
		}
		void display()
		{
			cout<<"Employee ID:"<<employeeId<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Salary:"<<salary<<endl;
		}
};

int main()
{
	Employee e1(1001,"harsh",350000);
	e1.display();
	return 0;
}