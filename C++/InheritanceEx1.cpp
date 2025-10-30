//Example of Single Inhertiance 
#include<iostream>
using namespace std;
class Person
{
	public:
	string name,address;
	int c_no;
	void getDetails()
	{
		cout<<"Enter name,address,c_no ";
		cin>>name>>address>>c_no;
	}
	void display()
	{
		cout<<name<<"\t"<<address<<"\t"<<c_no<<endl;
	}
};
class Employee : public Person
{
	public:
	int salary;
	void getDetailsEmp()
	{
		getDetails();
		cout<<"Enter salary";
		cin>>salary;
	}
	void displayEmp()
	{
		display();
		cout<<salary;
	}
};
int main()
{
	Person p;
	p.getDetails();	
	p.display();
	
	Employee e;	
	e.getDetailsEmp();
	e.displayEmp();
}
