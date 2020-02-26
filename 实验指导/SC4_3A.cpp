#include <stdio.h>
#include<math.h>
int main ()
{
int b[5][5];
int i,j;
long sum;
for (i=0;i<5;i++)
	for(j=0;j<5;j++)
		scanf("%d",&b[i][j]);
sum=0;
for(i=0,j=5;i<5;i++)
	{
	j--;
	sum=sum+b[i][j];}
printf("%ld",sum);
return 0;
 } 
