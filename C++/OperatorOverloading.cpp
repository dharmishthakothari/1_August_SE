//create point class
//initilize thru contructor x,y
//create display() to display x and y
#include<iostream>
using namespace std; 
class Point
{
	public:
		int x,y;
		Point()
		{
		}
		Point(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void display()
		{
			cout<<x<<":"<<y<<endl;
		}
		Point operator+(Point other)
		{
			Point ans;
			ans.x=x+other.x;
			ans.y=y+other.y;
			return ans;
		}
		//prefix
		Point operator++()
		{
			Point ans;
			ans.x=++x;
			ans.y=++y;
			return ans;
		}
		
		//postfix
		Point operator++(int)
		{
			Point ans;
			ans.x=x++;
			ans.y=y++;
			return ans;
		}
};
int main()
{
	Point p1(2,3);
	p1.display();
	Point p2(12,13);
	p2.display();
	Point p3;
	p3=p1+p2;
	cout<<"2 Points added"<<endl;
	p3.display();
	++p1;
	p1.display();
	p2++;
	p2.display();
}
