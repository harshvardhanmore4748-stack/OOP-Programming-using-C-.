#include<iostream>
using namespace std;
class Reactangle
{
	public:
		int length;
		int width;
		float area;
		Reactangle()
		{
			length=10;
			width=15;
			area=length*width;
		}
		void display()
		{
			cout<<"Area of rectangle is:"<<area<<endl;
		}
};
int main()
{
	Reactangle r1;
	r1.display();
	return 0;
}