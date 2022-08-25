#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int f=0;
int searching(char str[15],char ch)
{
	for(int i = 0;i < 15; i++)
	{
		
		if (str[i] == ch )
		{
			cout<<"Found: "<<str[i];
			f++;
			break;
		}
	
	}
		if(f==0)

			cout<<ch<<" Not found."<<endl;

	return 0;
}
int main()
{
	char str[15] = "string example";
	char ch;
	cout<<"Enter the character you want to search: ";
	cin>>ch;
	searching(str,ch);
}