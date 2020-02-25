#include <stdio.h>
#include<math.h>
int main ()
{
	int i,n,sum;
	scanf("%d",&n);
	sum=0;
	for (i=1;i<n;i++)
		if (n%i==0) sum+=i;
	if (sum==n) printf ("Yes");
	else printf("No"); 
 	return 0;
 } 
