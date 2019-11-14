#include<stdio.h>
int a,b,c,t;
int main ()
{
	scanf("%d%d%d",&a,&b,&c);
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
	printf("%d %d %d",a,b,c);
	return 0 ;
}
