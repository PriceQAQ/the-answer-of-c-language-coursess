#include <stdio.h>
#include <string.h>
int main ()
{
char s[100]={0};
int i,key;
scanf("%d",&key);
while(getchar()!='\n');
gets(s); 
i=0;
while (s[i]!='\0'){
	if ((s[i]>=65 && s[i]<=90)  ){
	s[i]=(s[i]+key-65)%26+65;
	}
	if (s[i]>=97 && s[i]<=122){
	s[i]=(s[i]+key-97)%26+97;	
	}
	i++;
}
puts(s);	
return 0;
 } 
