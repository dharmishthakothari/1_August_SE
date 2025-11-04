#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual int calculateArea()=0;
};
class Rectangle : public Shape
{
	public:
		int calculateArea()
		{
			return 8*2;
		}
};
int main()
{
	//Shape s;
	Rectangle r;
	cout<<r.calculateArea()<<endl;
	
}
