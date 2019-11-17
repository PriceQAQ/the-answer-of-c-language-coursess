  #include<stdio.h>
  int main()
  { 
  int i,j,k,l,line;
  scanf("%d",&line);
  for(i=1;i<=line;i++)
  		{
		for(j=1;j<=line-i;j++)
  			printf(" ");
  		for(k=1;k<=2*i-1;k++)
			printf("*");
		  printf("\n");
		  }
		 return 0 ;
   } 
