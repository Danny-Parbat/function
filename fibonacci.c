#include<stdio.h>
int FibonacciSeries(int );
int main(){
	int f,c,n;
	printf("enter num");
	scanf("%d",&n);
	FibonacciSeries(n);
	return 0;
}
int FibonacciSeries(int n)
{int i,a=0,b=1,c;
	for(i=1;i<=n;i++){
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
}
