#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int roll_no;
		student()
		{
			cout<<"Enter your name:";
			cin>>name;
			cout<<"Enter your Roll no:";
			cin>>roll_no;
		}
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Roll no:"<<roll_no<<endl;
		}
};
int main()
{
	student s1;
	s1.display();
	return 0;
}