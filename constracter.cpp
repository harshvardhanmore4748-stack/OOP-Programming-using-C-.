#include<iostream>
using namespace std;
 class Student
 {
 	public:
 		int roll_no;
 		Student()
 		{
		 roll_no=101;
		 }
		 void display()
		 {
		 	cout<<"Roll no:"<<roll_no<<endl;
		 }
 };
 int main()
 {
 	Student s1;
 	s1.display();
 	return 0;
 	
 }