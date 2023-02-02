// Day 7

#include<iostream>
using namespace std;
int main()
{
	int month,year;
	cout<<"Enter a Month : ";
	cin>>month;
	cout<<"Enter a Year : ";
	cin>>year;
	
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 )
	{
		cout<<"31";
	}
	else if((month==20 && year%4==0) || (year%4==0 && year%100!=0))
	{
		cout<<"29";
	}
	else if(month==2)
	{
		cout<<"28";
	}
	else
	{
		cout<<"30";
	}
	return 0;
}

