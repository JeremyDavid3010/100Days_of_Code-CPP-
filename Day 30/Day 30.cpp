// Day 30 Write a Program to print Length of the string without using strlen()

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int i,leng=0;
	cout<<"Enter a String";
	cin>>str;
	
	for(i=0;str[i]!=0;i++)
	{
		leng++;
	}
	cout<<"Length : "<<leng;
	return 0;
	
}
