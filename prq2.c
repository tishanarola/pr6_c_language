#include<stdio.h>
void main(){
	char str[20],n;
	int i,j=0;
	printf("\n enter string");
	gets(str);
	printf("\n enter the character which you want to count  ");
	scanf("%c",&n);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==n)
		j++;
	
	}
	printf("\n total =%d",j);
}
