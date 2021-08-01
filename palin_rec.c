#include<stdio.h>
int n;
int ispalin(int data)
{
	static int sum=0;
	if(data!=0)
	{
		sum=sum*10+data%10;
		ispalin(data/10)
	}
	else if(sum==n)
		return 1;
	else
		return 0;
}
int main()
{
	int p;
	printf("enter n value");
	scanf("%d",&n);
	p=ispalin(n);
	if(p==1)
		printf("palindrome");
	else
		printf("not palindrome");
}



