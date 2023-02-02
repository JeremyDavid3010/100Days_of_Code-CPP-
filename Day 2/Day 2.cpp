// Day 2

#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter an Alphabet"<<endl;
	cin>>ch;
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<"It is an alphabet";
	}
	else
	{
		cout<<"Invalid Input";
	}
}
