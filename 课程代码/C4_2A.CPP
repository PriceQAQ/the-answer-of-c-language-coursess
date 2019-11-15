#include <stdio.h>
int main()
{
	int a[100]={0};
	int n,i,k;
	//freopen("C4_2A.in", "r", stdin);
	//freopen("C4_2A.out", "w", stdout);
	scanf("%d%d",&n,&k);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	//*********************************
	for (i=k;i<n;i++)
		{
		a[k]=a[k+1];
		k++;}
	for (i=0;i<n-1;i++)
	printf("%d ",a[i]);
		//=================================
	return 0;
}
