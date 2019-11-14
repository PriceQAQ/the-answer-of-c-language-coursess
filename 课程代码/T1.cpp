#include <stdio.h>
int main()
{
int a[100]={0};
int i,n,k,d; 
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=k;i<n+1;i++)
{
		a[n+1]=a[n];
		n=n-1;}
	for (i=0;i<n+1;i++)
	printf("%d ",a[i]);
	return 0;
}
