#include<iostream>
using namespace std;
class Shape
{
	public:
	virtual int calculateArea()
	{
		cout<<"Calculating area"<<endl;
		return 0;
	}
};
class Rectangle : public Shape
{
	public :
		int l,b;
	Rectangle(int l,int b)	
	{
		this->l=l;
		this->b=b;
	}
	int calculateArea()
	{
		return l*b;
	}
};
class Circle : public Shape
{
	public:
		int r;
		Circle(int r)
		{
			this->r=r;
		}
		int calculateArea()
		{
			return 3.14*r*r;
		}
};
int main()
{
//	Shape s;
//	cout<<s.calculateArea()<<endl;
//	Rectangle r(2,3);
//	cout<<r.calculateArea()<<endl;
	Shape *s;
	Rectangle r(2,3);
	s=&r;
	cout<<s->calculateArea()<<endl;
	cout<<"Area of Rectagle "<<r.calculateArea()<<endl;
	Circle c(2);
	cout<<"Area of circle "<<c.calculateArea()<<endl;
	Shape *s1;
		s1=&c;
		cout<<"Area of circle shape "<<s1->calculateArea()<<endl;
}
