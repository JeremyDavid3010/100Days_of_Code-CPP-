// Day 38 Write a Program to print Non-repeating characters in a string

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	char str[20];
    int i;
    int frequency[256] = {0};
    cout<<"Enter a string: ";
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        frequency[str[i]]++;
    }
    cout<<"Non repeating characters: ";
    for(i = 0; i < 256; i++)
    {
        if(frequency[i] == 1)
        {
            printf("%c ", i);
        }
    }
    return 0;
}
