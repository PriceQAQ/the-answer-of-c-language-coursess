#include<stdio.h>
#include<string.h>
int main ()
{
	char a[100][100]={0};
	char s1[100];
	int i,j,n,k,l,m;
	scanf("%d",&n);
	for (i=0;i<n+1;i++){
		gets(a[i]);
	}
	for (i=0;i<n;i++){
		for (j=0;j<n-i;j++){
			k=strcmp(a[j],a[j+1]);
				if(k>0){
			strcpy(s1,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],s1);
				}	
			}
		}
	printf(" \n");
	for (i=0;i<n+1;i++) puts(a[i]);
	return 0;	
}
 
