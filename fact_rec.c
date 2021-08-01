#include<stdio.h>
int fact(int v)
{
	int f=1;
	if(v==0)return 1;
	if(v==1)return 1;
	else
		return(v*fact(v-1));
}}


int main()
{
	int v,d;
	printf("enter n value");
	scanf("%d",&v);
	d=fact(v);
	printf("fact=%d",d);
}

