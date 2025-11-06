#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream outFile("test1.txt");
	string data;
	do{
	
	
	cout<<"Enter data ";
	cin>>data;
	outFile<<data;
	}while(data!="END");
	
	
}
