#include <stdio.h>
#define N 10
void exc(int a[],int b[])
{
	int i,t;
	for (i=0;i<N;i++){
		t=a[i];a[i]=b[i];b[i]=t;
	}
}
int main () {
int a [10],b[10];
int i;
for(i=0;i<N;i++) scanf("%d",&a[i]);
for(i=0;i<N;i++) scanf("%d",&b[i]);
void exc(int a[],int b[]);
exc(a,b);
for(i=0;i<N;i++) printf("%d ",a[i]);
printf("\n");
for(i=0;i<N;i++) printf("%d ",b[i]);
return 0;
}
