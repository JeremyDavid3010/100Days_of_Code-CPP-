// Day 31 Write a Program to Toggle each character in a string

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[50];
	int count;
	cout<<"Enter a String : ";
	cin>>str;
	for(count=0;str[count]!=0;count++)
	{
		if(str[count]>='A' && str[count]<='Z')
		{
			str[count]=str[count]+32;
		}
		else if(str[count]>='a' && str[count]<='z')
		{
			str[count]= str[count]-32;
		}
	}
	cout<<"Toggled String : "<<str;
	return 0;
}
