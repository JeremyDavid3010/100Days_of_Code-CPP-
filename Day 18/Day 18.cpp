// Day 18 Write a program to Add two fractions
#include<iostream>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3,div,i;
	cout<<"Enter x1 & y1 :";
	cin>>x1>>y1;
	cout<<"Enter x2 & y2 :";
	cin>>x2>>y2;
	x3=(x1*y2)+(x2*y1);
	y3=(y1*y2);
	if(x3>y3)
		div=y3;
	else
		div=x3;
	for(i=div;i>0;i--)
	{
		if(x3%i==0 && y3%i==0)
		{
			x3=x3/i;
			y3=y3/i;
		}
	}
	cout<<"Sum : "<<x3<<"/"<<y3;
}
