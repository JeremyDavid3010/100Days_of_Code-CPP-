//Day 19 Write a program to identify if the number is Armstrong number or not
#include<iostream>
using namespace std;
int main()
{
	int n,temp,rem,sum=0;
	cout<<"Enter a Number :";
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(sum==n)
		cout<<n<<" is a Armstrong Number";
	else
		cout<<n<<" is not a Armstrong number";
	return 0;
}
