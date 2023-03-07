// Day 43 Write Program to find the array type

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the size of the array: ";
cin>>n;
int arr[n];
int i;
int o=0, e=0;
cout<<"Enter the array elements: ";
for(i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
for(i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 1)
		o++;
		if(arr[i] % 2 == 0)
		e++;
	}
if(o == n)
	cout<<"Odd";
else if(e == n)
	cout<<"Even";
else
	cout<<"Mixed";
return 0;
}
