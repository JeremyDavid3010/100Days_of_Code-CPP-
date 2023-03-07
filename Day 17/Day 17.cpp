// Day 17 Write a program to find the Factors of a number

#include<iostream>
using namespace std;
int main(){
	int n,temp=1;
	cout<<"Enter a Number :"<<endl;
	cin>>n;
	while(temp<=n)
	{
		if(not(n%temp))
		cout<<temp<<",";
		temp++;
	}
}
