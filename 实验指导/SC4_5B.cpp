#include <stdio.h>
#include <string.h>
int main ()
{
char s[30];
int i,j;
gets(s);
i=0;
while (s[i]!='\0'){
	if(s[i]>='a' && s[i]<='z'){
		j=i;
		while (s[j]!='\0'){
			s[j]=s[j+1];
			j++;	
		}
		s[j-1]='\0';
	}
	else i++;
}
puts(s);	
return 0;
 } 
