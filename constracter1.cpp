#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int roll_no;
		student()
		{
			name="harsh";
			roll_no=71;
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