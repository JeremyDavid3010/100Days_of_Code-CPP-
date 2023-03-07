// Day 11 

#include<iostream>
using namespace std;

int main(){
	int i,n,n1=0,n2=1,fibo=0;
	cout<<"Enter a Number"<<endl;
	cin>>n;
	for(i=1;i<=n;++i)
	{
		cout<<n1<<",";
		fibo = n1+n2;
		n1=n2;
		n2=fibo;
	}
	return 0;
}
