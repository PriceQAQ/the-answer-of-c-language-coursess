#include<stdio.h>
  int main()
  { 
  int i,j,k,line;
  scanf("%d",&line);
    for(i=1;i<=line;i++)
  		{
		for(j=1;j<=line-i+1;j++)
  			printf(" ");
  		for(k=1;k<=2*i-1;k++)
			printf("*");
		  printf("\n");
		  } 
  for(i=1;i<=line-1;i++)
  { 
		for(j=1;j<=i+1;j++)
  		{
		  printf(" ");}
  		for(k=1;k<=2*(line-i+1)-3;k++)
		  printf("*");
  		  printf("\n");		 
		 } 
		 return 0;
} 
