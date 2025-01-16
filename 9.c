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
{int i,c=0,r;
	for(i=1;i<=n;i++){
		if(n%i==0)
		{
			c++;
		}}
		if(c==2)
		{
		printf("Prime");}
		else
		{
		printf("Not prime");}
	}

	
