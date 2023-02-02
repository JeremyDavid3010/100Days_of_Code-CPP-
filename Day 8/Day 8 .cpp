// Day 8

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,x1,x2;
	cout<<"Enter the value of a,b and c : ";
	cin>>a>>b>>c;
	float d=(b*b)-(4*a*c); //d=(sqrt(b*b)-4ac)
	
	if(d==0)
	{
		x1=x2=(-b)/(2*a);
		cout<<"The root are real and equal";
	}
	else if(d>0)
	{
		x1=((-b)+sqrt(d))/(2*a);
		x2=((-b)-sqrt(d))/(2*a);
		cout<<"Roots are real and unequal";
		cout<<"Roots are :"<<x1<<x2;
	}
	else
	{
		cout<<"Roots are Imaginary and unequal";
	}
	return 0;
}
