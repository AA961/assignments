#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string[10] = "115387318";
	char h = '_';
	cout<<"Normal String:"<<string<<endl;
	strset(string,h);
	cout<<"Encrypted string: "<<string<<endl;
}