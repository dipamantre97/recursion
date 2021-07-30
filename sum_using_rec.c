#include<stdio.h>
int sum_digit(int v);
{
	if(v/10==0)
		return 1;
	else
		return(v%10+sum_digit(v/10));
}

int main()
{
	long int n,d;
	printf("enter value of n");
	scanf("%d",&n);
	d=sum_digit(n);
	printf("sum=%d",d);
}

