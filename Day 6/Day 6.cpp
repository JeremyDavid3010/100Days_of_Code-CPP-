// Day 6

#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter 2 Number : "<<endl;
	cin>>x>>y;
	
	if(x>0 && y>0)
	{
		cout<<"This Point lies in First Quadrant"<<endl;
	}
	else if(x<0 && y>0)
	{
		cout<<"This Point lies in Second Quadrant"<<endl;
	}
	else if(x<0 && y<0)
	{
		cout<<"This Point lies in Third Quadrant"<<endl;
	}
	else if(x>0 && y<0)
	{
		cout<<"This Point lies in Fourth Quadrant"<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
}

