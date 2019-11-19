#include <stdio.h>
#define N 10
void exc(int a[][2],int b[][2])
{
	int i,j,t;
	for (i=0;i<3;i++){
		for (j=0;j<2;j++){
		t=a[i][j];a[i][j]=b[i][j];b[i][j]=t;
	}}}
int main () {
int a [3][2],b[3][2];
int i,j,t;
for (i=0;i<3;i++){
		for (j=0;j<2;j++) scanf("%d",&a[i][j]);}
for (i=0;i<3;i++){
		for (j=0;j<2;j++) scanf("%d",&b[i][j]);}
void exc(int a[][2],int b[][2]);
exc(a,b);
for (i=0;i<3;i++){
		for (j=0;j<2;j++) printf("%d ",a[i][j]);}
printf("\n");
for (i=0;i<3;i++){
		for (j=0;j<2;j++) printf("%d ",b[i][j]);}
return 0;
}
