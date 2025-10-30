//method overloading
#include<iostream>
using namespace std;
int addition(int num1,int num2)
{
	return num1+num2;
}
int addition(int num1,int num2,int num3)
{
	return num1+num2+num3;
}
float addition(int num1,float num2)
{
	return num1+num2;
}
int main()
{
	int ans;
	ans=addition(12,22);
	cout<<ans<<endl;
	ans=addition(3,5,34);
	cout<<ans<<endl;
	float ans1;
	ans1=addition(23,45.456456f);
	cout<<ans1;
}
