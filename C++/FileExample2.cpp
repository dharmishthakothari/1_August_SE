#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//ifstream inFile("OperatorOverloading.cpp");
	ifstream inFile("C:\\Users\\Admin\\Documents\\21_Aug_Python\\function_example6.py");
	if(!inFile)
	{
		cout<<"File is not exist";
		return 0;
	}
	string s;
	while(!inFile.eof())
	{
		inFile>>s;
		cout<<s<<endl;
	}
	
}
