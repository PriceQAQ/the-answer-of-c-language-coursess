#include<stdio.h>
int i,j,k;
int a,b;
int temp;
int main (){
	scanf("%d%d",&a,&b);
	i=a;
	j=b;
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	temp = a%b;
	while (temp != 0)
	{
		a=b;
		b=temp;
		temp=a%b; 
	}
	k=i*j/b;
	printf("%d",k);
	return 0;
}

