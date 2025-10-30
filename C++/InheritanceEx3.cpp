//Multiple inhritance 
#include<iostream>
using namespace std;
class Father
{
	public:
		void nature()
		{
			cout<<"Nature from Father"<<endl;
		}

};
class Mother 
{
	public:
		void features()
		{
			cout<<"Features from Mother "<<endl;
		}
};
class Son : public Father,public Mother
{
	public:
		void study()
		{
			cout<<"Study from son"<<endl;
		}
};
int main()
{
	Son objSon;
	objSon.features();
	objSon.nature();
	objSon.study();
}

