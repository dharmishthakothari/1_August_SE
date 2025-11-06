#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outFile("test.txt",ios::app);
	string s;
	cout<<"Enter data ";
	cin>>s;
	outFile<<s;
}
