#include <stdio.h>
#include<math.h>
int main ()
{
	int i,j,a,n;
	long sn,sum=0;
 	scanf("%d%d",&a,&n);
 		sn=0;
	 for(i=1;i<=n;i++){
 		sn=a+sn*10;
 		sum=sum+sn;
	 }
	 printf("%ld",sum);
	 return 0;
 } 
