#include<stdio.h>
int fact(int);
int main(){
	int c,n;
	printf("enter num");
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}
int Reverse(int n)
{int i,c=0,r;
	if(n==0)
	return 1;
	return n*fact(n-1);
}

	
