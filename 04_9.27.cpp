#include<iostream>
using namespace std;

struct Pop
{
	char name[50];
	float pop;
};
void fun(Pop x, Pop y);
int main()
{
	Pop a,b;
	cout<<"Enter name and population in millions: ";
	cin>>a.name>>a.pop;
	cout<<"Enter name and population in millions: ";
	cin>>b.name>>b.pop;
	fun(a,b);
}

void fun(Pop x,Pop y)
{
	cout<<"The country with more population is: ";
	if(x.pop > y.pop){
		cout<<"Name: "<<x.name<<endl;
		cout<<"Popluation: "<<x.pop<<" millions."<<endl;
	}
	else
	{
		cout<<"\nName:  "<<y.name<<endl;
		cout<<"Popluation:  "<<y.pop<<" millions."<<endl;
	}
}