#include <stdio.h>
int a,b,c,d,f;//234
int main() 
{
	scanf("%d",&a);
	b=a%10;//��λ���ļ��� 
	c=(a-a%100)/100;//��λ���ļ��� 
	d=a-b-c*100;
	f=b*100 + c + d;
	printf("%03d",f);
	return 0;
}
