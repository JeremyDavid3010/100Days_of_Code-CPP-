//Day 1 

#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter a Alphabet"<<endl;
	cin>>ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		cout<<"It is a vowel";
	}
	else
	{
		cout<<"It is a Consonant";
	}
}
