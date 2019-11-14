#include<stdio.h>
int a,b;
int temp;
int main (){
	scanf("%d%d",&a,&b);
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
	printf("%d\n",b);
	return 0;
}
//求最小公倍数即为两个数的乘积除以最小公倍数 
