//method overloading
#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		int age;
	Person()
	{
		cout<<"Welcome";
	}
	Person(string name,int age)
	{
		this->name=name;
		this->age=age;
	}
	void display()
	{
		cout<<name<<age<<endl;
	}
	void display(string msg)
	{
		cout<<name<<age<<msg<<endl;
	}
};
int main()
{
	Person p;
	Person p1("Tammana",20);
	p1.display();
	p1.display("All the Best");
}
