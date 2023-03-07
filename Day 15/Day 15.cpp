//Day 15 Check whether strong number or not

#include<iostream>
using namespace std;

int main(){
	int n,rem,fact,sum=0;
	cout<<"Enter a Number";
	cin>>n;
	int copy=n;
	if(n==0)
	sum=sum+fact;
	else
	{
		while(copy!=0)
	{
		rem=copy%10;
		fact = rem;
		sum=sum+fact;
		copy=copy/10;
	}}
	if(sum==n)
	cout<<"Strong Number";
	else
	cout<<"Not a Strong Number";
	return 0;
	
}
