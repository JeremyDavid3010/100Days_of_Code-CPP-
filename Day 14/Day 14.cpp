// Day 14 To Reverse an given number

#include<iostream>
using namespace std;

int main(){
	int n,rev,rem;
	cout<<"Enter a Number : ";
	cin>>n;
	
	while(n>0)
	{
		rem=n%10;
		rev=(rev *10)+rem;
		n=n/10;
	}
	cout<<rev;
	return 0;
}
