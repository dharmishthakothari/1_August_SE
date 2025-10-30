//Hierachical inheritance 
#include<iostream>
using namespace std;
class A
{
	public:
		void f1()
		{
			cout<<"A"<<endl;
		}
		
};
class B:public A
{
	public:
		void f2()
		{
			cout<<"B"<<endl;
		}
};
class C : public A
{
	public:
		void f3()
		{
			cout<<"C"<<endl;
		}
};
int main()
{
	C objc;
	B objb;
	objc.f1();
	objc.f3();
	objb.f1();
	objb.f2();
}
