// Day 33 Write a Program to check if String is a palindrome or not

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[50];
	int i,len=0,flag=0;
	cout<<"Enter a String : ";
	cin>>str;
	len=strlen(str);
	
	for(i=0;i<len/2;i++)
	{
		if(str[i]==str[len-i-1])
		flag++;
	}
	if(flag==i)
		cout<<"Palindrome";
	else
		cout<<"Not a Palindrome";
	return 0;
}
