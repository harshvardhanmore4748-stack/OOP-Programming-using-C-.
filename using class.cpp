#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
		int rollno;
		string name;
		string mobileno;
		
		 void acceptdata()
		{
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the Roll no:";
			cin>>rollno;
			cout<<"Enter Mobile no:";
			cin>>mobileno;
		}
		
		void displaydata()
		{
			cout<<"\n Student Details"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Roll no:"<<rollno<<endl;
			cout<<"Mobile no:"<<mobileno<<endl;
		}
};

int main()
{
	student s1;
	s1.acceptdata();
	s1.displaydata();
	return 0;
}