#include<iostream>
using namespace std;

class Person
{
	int c_no;
	public:
		string name;
	Person(string name,int c_no)
	{
		this->name=name;
		this->c_no=c_no;
	}
	friend class PersonFriend;
};
class PersonFriend
{
	public:
		void displayCNo(Person p)
		{
			cout<<p.c_no;
		}
		
			
};
int main()
{
	Person p("dfsdf",1111);
	PersonFriend p1;
	p1.displayCNo(p);
	
}
