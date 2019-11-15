#include <stdio.h>
int main()
{
	int a[100]={0};
	int n,i,j,d,m;
	//freopen("C4_2C.in", "r", stdin);
	//freopen("C4_2C.out", "w", stdout);
	scanf("%d%d",&n,&d);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	//*************************************	
	m=0;
	i=0;
	j=0;
	for(i=0;i<n;i++)
 	{
		if(a[i]==d) 
			{m++;
	 		i--;
	 		for(j=i+1;j<n;j++) a[j]=a[j+1]; }
	 }
	for (i=0;i<n-m;i++)
	printf("%d ",a[i]);
	//=====================================
	return 0;
}
