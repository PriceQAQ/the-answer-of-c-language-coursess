#include "stdio.h"
const int N0=100;

void swapAB( int a[], int *n, int b[], int *m)
{	
//**********************************************
	int l=*n>*m?*n:*m,i,t;
	for(i=0;i<l;++i)
	{
		int t;
		t=a[i];
		a[i]=b[i];
		b[i]=t;
	}
	int y;
	y=*n;
	*n=*m;
	*m=y;
//=================================================
}

int main()
{	int n, a[N0], m, b[N0], i;
	freopen("C6_1A.in", "r", stdin);
	freopen("C6_1A.out", "w", stdout);
	scanf("%d", &n);
	for( i=0; i<n; i++) 
		scanf("%d", &a[i]);

	scanf("%d", &m);
	for( i=0; i<m; i++) 
		scanf("%d", &b[i]);
	
	swapAB( a, &n, b, &m);
	
	for( i=0; i<n-1; i++) 
		printf("%d ", a[i]);
	printf("%d\n", a[n-1]);

	for( i=0; i<m-1; i++) 
		printf("%d ", b[i]);
	printf("%d\n", b[m-1]);

	return 0;
}
