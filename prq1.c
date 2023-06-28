#include<stdio.h>
#include<string.h>
void main(){
	char str1[50],str2[50];
	printf("\n enter the string to check for palindrome:");
	gets(str1);
	if(strcmp(str1,str2)==0)
	{
		printf("string is palindrome");
	}
	else
	{
		printf("string is not palindrome");
	}
	
}
