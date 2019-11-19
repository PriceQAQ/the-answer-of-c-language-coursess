 #include <stdio.h>
 #include <stdio.h>
int main() {
int x;
int fact(int x);
scanf("%d",&x);
printf("%d",fact(x));
return 0;
}
int fact(int x){
	int f;
	if (x==1) f=10;
	else f=2+fact(x-1);
	return f;
}
