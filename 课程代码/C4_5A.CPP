#include <stdio.h>
#include <string.h>
int main()
{
	char s1[30],s2[30];
	int k;
	//freopen("C4_5A.in", "r", stdin);
	//freopen("C4_5A.out", "w", stdout);
	gets(s1);
	gets(s2);
	//**********************************
k = strcmp(s1,s2);
if	(k==0) 
printf("%s=%s",s1,s2);
else if(k>0) 
	printf("%s>%s",s1,s2);
else 
	printf("%s<%s",s1,s2);
	//==================================
	return 0;
}
