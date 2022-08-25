#include<iostream>
using namespace std;

int main ()
{
	char str[50];
	int i,v;
	cout<<"Enter string/line: ";
	cin.getline(str,50);
	i=v=0;
	while(str[i] != '\0')
	{
		switch(str[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			v++;
		}
		i++;
	}
	cout<<"The string has "<<v<<" vowels."<<endl;
}