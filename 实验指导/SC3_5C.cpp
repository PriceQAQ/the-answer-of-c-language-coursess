#include <stdio.h>
#include<math.h>
int main ()
{
	int i,n,sum,m;
	scanf("%d%d",&m,&n);
	for (;m<=n;m++)
	{
	sum=0;
	for (i=1;i<m;i++)
		if (m%i==0) sum+=i;
	if (sum==m) printf ("%d ",sum);
	} 
 	return 0;
 } 
