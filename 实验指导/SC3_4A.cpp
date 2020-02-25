#include <stdio.h>
#include<math.h>
int main ()
{
	int i,n;
	scanf("%d",&n);
	for (i=2;i<n;i++)
		if (n%i==0) break;
	if (i==n) printf ("Yes");
	else printf("No");
 	return 0;
 } 
