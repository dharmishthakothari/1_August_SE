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
	friend void displayC_no(Person p);	
};
void displayC_no(Person p)
{
	cout<<p.c_no<<endl;
}
int main()
{
	Person p("Harmi",343423);
	cout<<p.name<<endl;
	displayC_no(p);
}
