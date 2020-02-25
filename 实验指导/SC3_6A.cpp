#include <stdio.h>
#include<math.h>
int main ()
{
	int i,j,n;
	long sn,sum=0;
 	scanf("%d",&n);
 	for(i=1;i<=n;i++){
 		sn=0;
 		for(j=1;j<=i;j++)
 		sn=sn+j;
 		sum=sum+sn;
	 }
	 printf("%ld",sum);
	 return 0;
 } 
