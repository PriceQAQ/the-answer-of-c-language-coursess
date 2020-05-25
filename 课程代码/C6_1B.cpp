 #include <stdio.h>
const int N0=100;

void connectAB( int a[], int *n, int b[], int *m)
{	
//************************************************
	int *q,i;
	q=a+*n;
	for(i=0;i<*m;++i)
	{
		*q=b[i];
		q++;
	}
	*n=*n+*m;
//=================================================
}
int main()
{	int n, a[2*N0], m, b[N0], i;
	scanf("%d", &n);
	for( i=0; i<n; i++) 
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for( i=0; i<m; i++) 
		scanf("%d", &b[i]);
	connectAB( a, &n, b, &m);
	for( i=0; i<n-1; i++) 
		printf("%d ", a[i]);
	printf("%d\n", a[n-1]);
	return 0;
}
