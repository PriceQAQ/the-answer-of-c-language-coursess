#include <stdio.h>
#define n 10
#define cc &&
void exc(int a[]){
	int i=0,j=9,t;
	for(i=0;i<=j;i++){
		if(a[i]%2==0){
			for(;a[j]%2==0 && i<j;j--);
				if(a[j]%2!=0) 
					{t=a[i];a[i]=a[j];a[j]=t;}
				else 
					break;
		}
		}
}
	int main(){
		int a[n]={0},i;
		for(i=0;i<n;i++)
 			scanf("%d",&a[i]);
		exc(a);
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
	}
