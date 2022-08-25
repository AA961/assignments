#include<iostream>
using namespace std;

void square(int n)
{
	cout<<n<<"\t"<<n*n<<endl;
}

int main()
{
	int num[5];
	cout<<"Enter 5 integer(positive or negative): ";
	for(unsigned int i = 0 ; i < 5 ; i++){
		cin>>num[i];
	}
	for ( unsigned int i = 0 ; i < 5 ; i++ )
		square(num[i]);
}