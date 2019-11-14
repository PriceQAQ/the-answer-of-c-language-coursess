#include <stdio.h>
int main()
{
	char s1[30],s2[30];
	int i=0,k;
//	freopen("C4_5B.in", "r", stdin);
//	freopen("C4_5B.out", "w", stdout);
	gets(s1);
	gets(s2);
	//***************************************
for(i=0;i<30;i++){
	k=s1[i]-s2[i];
	if(k!=0) 
	break;
	if(s1[i]=='\0') 
	break;
}
if(k>0)
printf("%s>%s",s1,s2);
else if(k==0)
printf("%s=%s",s1,s2);
else 
printf("%s<%s",s1,s2);
	//========================================
	return 0;}
