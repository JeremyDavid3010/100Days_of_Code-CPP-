// Day 29 Write a Program to concatenate a string.

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str1[50],str2[50];
	cout<<"Enter 1st String :";
	cin>>str1;
	cout<<"Enter 2nd String :";
	cin>>str2;
	strcat(str1,str2);
	cout<<"Concatenated String : "<<str1;
	return 0;
	
}
