#include<iostream>
using namespace std;
class Employee
{
	public:
		int employee_id;
		string name;
		float salary;
		Employee()
		{
			employee_id=71;
			name="harsh";
			salary=70000;
			
		}
		void display()
		{
			cout<<"Employee id:"<<employee_id<<endl;
			cout<<"Employee name:"<<name<<endl;
			cout<<"Employee salary:"<<salary<<endl;
		}
};
int main()
{
	Employee e1;
	e1.display();
	return 0;
}