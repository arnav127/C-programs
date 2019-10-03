#include<stdio.h>
#include<string.h>
int main()
{
	int len,i,count=0;
	char s[20];
	printf("\nEnter a string-:");
	scanf("%s",&s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]==s[len-i-1])
		count++;	
	}
	if(count==len)
	printf("String is a pallindrome");
	else printf("String is a not pallindrome");
	 
	return 0;
	
}
