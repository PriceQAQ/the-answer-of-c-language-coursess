#include <stdio.h>
#include<math.h>
int fun(int a,int b) {
	int temp,j,i,k;
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
}
int main ()
{
	int a,b;
	scanf("%d%d",&a,&b);
	fun(a,b);
return 0;
 } 
