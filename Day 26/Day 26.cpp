// Day 26 Write a program to calculate Maximum number of handshakes

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of people";
	cin>>n;
	int total=n*(n-1)/2;
	cout<<"Handshakes = "<<total;
	return 0;
}
