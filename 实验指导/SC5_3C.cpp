#include <stdio.h>
#include<math.h>
int God(int x, int y) {
	int r;
	r=x%y;
	while (r!=0){
		x=y;
		y=r;
		r=x%y;
	}
	return y;
}
int main ()
{
	int a,b,c;
	int i,j,m;
	scanf("%d%d%d",&a,&b,&c);
	int t;
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	if(a>c){
		t=a;
		a=c;
		c=t;
	}
	if(b>c){
		t=b;
		b=c;
		c=t;
	}
	i=God (a,b);
	j=God (i,c);
	printf("%d ",j);
	m=a*b*c/j;
	printf("%d",m);
 } 
