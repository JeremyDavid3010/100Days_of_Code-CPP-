// Day 20 Write a program to identify if the number is Prime number or not
#include<iostream>
using namespace std;
int main(){
	int n,i,count=0;
	cout<<"Enter a Number :";
	cin>>n;
	if(n==0)
	{
		cout<<n<<" is not a prime number";
		
	}
	else
	{
		for(i=2;i<n;i++)
			if(n%i==0)
				count++;
	}
	if(count>1)
		cout<<n<<" is not a prime number";
	else
		cout<<n<<" is a prime number";
	return 0;
}
