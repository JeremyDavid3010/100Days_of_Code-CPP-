// Day 9

#include<iostream>
using namespace std;

int main()
{
	int n,c=0;
	cout<<"Enter a Number : ";
	cin>>n;
	
	while(n>0)
	{
		n/=10;
		c++;
	}
	cout<<c;
	return 0;
}
