#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outFile("test.txt");
	if(!outFile)
	{
		cout<<"File is not created";
		return 0;
	}
	
	outFile<<"This is Beatiful Morning!!!"<<endl;
	outFile<<"This is Thursday!!!"<<endl;
	outFile<<"End of File"<<endl;
	cout<<"Data Written sucessfully"<<endl;
}
