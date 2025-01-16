#include<stdio.h>
int Reverse(int);
int main(){
	int c,n;
	printf("enter num");
	scanf("%d",&n);
	Reverse(n);
	return 0;
}
int Reverse(int n)
{int i,sum=0,r;
	while(n!=0){
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("%d",sum);
	}
