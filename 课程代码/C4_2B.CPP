#include <stdio.h>
int main()
{
	int a[100]={0};
	int n,i,k,d;
//	freopen("C4_2B.in", "r", stdin);
//	freopen("C4_2B.out", "w", stdout);
	scanf("%d%d%d",&n,&k,&d);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	//********************************
	for (i=n;k<i;i--)
		a[i]=a[i-1];
		a[k] =d;
	for (i=0;i<n+1;i++)
	printf("%d ",a[i]); 
	//=================================
	return 0;
}
