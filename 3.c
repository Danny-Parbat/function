#include<stdio.h>
int add(int ,int);
int main(){
	int a,b,c;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("%d",add(a,b));
	return 0;
}
int add(int a ,int b)
{int c;
	c= a+b;
	return c;
}
