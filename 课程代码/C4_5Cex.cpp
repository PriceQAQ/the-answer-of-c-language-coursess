#include <stdio.h>
#include <string.h>
int main()
{
	char s1[30],s2[30];
	int i,j,k,k1,k2,flag=0;
	//freopen("C4_5C.in", "r", stdin);
	//freopen("C4_5C.out", "w", stdout);
	gets(s1);
	gets(s2);
	//*****************************************
for(i=0;s1[i]!='\0';i++)
	{flag++;
	 j=0;
	 k=s1[flag-1];
	 k2=s2[j];
if(k==k2){
	for(j=0;s2[j]!='\0';j++){
		k1=s1[flag+j-1];
			if((s2[j]-k1)!=0){break;}
							}
		 }
				if(s2[j]=='\0'){printf("Yes");break;}}
if(s1[i]=='\0'){printf("No");}
	//========================================
	return 0;
}
