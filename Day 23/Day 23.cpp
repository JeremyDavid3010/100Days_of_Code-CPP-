// Day 23 Write a program to Replace all 0’s with 1 in a given integer

#include<iostream>
using namespace std;
int main(){
	int n,newnum=0;
	cout<<"Enter a Number :";
	cin>>n;
	if(n==0)
		newnum=1;
	while(n>0)
	{
		int rem=n%10;
		if(rem==0)
			rem=1;
		n=n/10;
		newnum=newnum*10+rem;
	}
	n=0;
	while(newnum>0)
	{
		int r=newnum%10;
		n=n*10+r;
		newnum=newnum/10;
	}
	cout<<"New Number :"<<n;
	return 0;
}
