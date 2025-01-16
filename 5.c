#include<stdio.h>
int FindFactorial(int);
int main(){
	int f,c;
	printf("enter num");
	scanf("%d",&f);
	printf(" factorial: %d",FindFactorial(f));
	return 0;
}
int FindFactorial(int f)
{int i,b=1;
	for(i=1;i<=f;i++){
		b=b*i;
	}
	return b;
}
