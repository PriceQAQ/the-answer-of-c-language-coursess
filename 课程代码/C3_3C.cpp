#include<stdio.h>
  int a,b,c;
  int i,j,k;
  int count;
  int main(){
  	scanf("%d",&j);
	count=0;
	for(i=101;i<999;i++)
  {
   b=i%10;
   c=(i%100-b)/10;
   a=(i-b-c)/100;
   if(i ==a*a*a+b*b*b+c*c*c ) 
   {
   printf("%d ",i);
	count++;}
	if (count==j) break;
}
  return 0;
  }

