//Scope resolution operator
//this keyword
#include<iostream>
using namespace std;
class Person
{
	public:
	string name;
	int age;
	Person()
	{
		
	}
	Person(string name,int age)	
	{
		//'this ' is use to referece the current object
		this->name=name;
		this->age=age;		
	}
	void display()
	{
		cout<<name<<"\t"<<age<<endl;
	}
};
class Employee : public Person
{
	public:
		string name;
		int age,salary;
	Employee(string name,int age,int salary)
	{
		this->name=name;
		this->age=age;
		this->salary=salary;
		//cout<<name<<age;

	}
	void display()
	{
		
		Person::display();
		cout<<name<<age<<salary;

	}
};
int main()
{
	Person p("Shubh",22);
	p.display();
	Employee e("Dharmishtha",30,12345);
	e.display();
}
