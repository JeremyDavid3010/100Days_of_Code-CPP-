// Day 16 Write a program to identify if the number is Perfect number or not
#include<iostream>
using namespace std;
int main(){
	int i,num,div,sum=0;
	cout<<"Enter a Number :";
	cin>>num;
	for(i=1;i<num;i++)
	{
		div=num%i;
		if(div==0)
			sum=sum+i;
	}
	if(sum==num)
		cout<<num<<"is a Perfect number";
	else
		cout<<num<<"is a not perfect number";
	return 0;
}
