//Day 12

#include<iostream>
using namespace std;

int main()
{
	int n,sum;
	cout<<"Enter numbers :"<<endl;
	cin>>n;
	
	while(n!=0){
		sum += n%10;
		n = n/10;
	}
	cout<<sum;
	return 0;
}
