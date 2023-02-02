// Day 10

#include<iostream>
using namespace std;

int main()
{
	int num,factorial=1;
	cout<<"Enter a Number to find factorial : ";
	cin>>num;
	for(int a=1;a<=num;a++)
	{
		factorial=factorial*a;
	}
	cout<<factorial<<endl;
	return 0;
}
