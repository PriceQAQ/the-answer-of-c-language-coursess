#include <stdio.h>
#include<math.h>
int sum(int n) {
	int f;
	if(n==1)  f=1;
	else  f=sum(n-1)*n;
	return f;
}
int main ()
{
	int i,n;
	long s=0;
	scanf("%d",&n);
	for (i=1;i<n+1;i++)
		s=s+sum(i);
	printf ("%ld",s);
	return 0;
 } 
