// Day 21 Write a program to identify if the number is Palindrome or not

#include<iostream>
using namespace std;
int main(){
	int n,rem,rev=0,copy;
	cout<<"Enter a number";
	cin>>n;
	copy=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==copy)
	cout<<"Palindrome";
	else
	cout<<"not a Palindrome";
	return 0;
}
