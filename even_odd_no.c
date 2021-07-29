//WAP to print even and odd no bet given range

#include<stdio.h>
void even(int start,int end)
{
	if(start>end)
		return;
	printf("%d",start+1);
	even(start+2,end);
}

void odd(int start,int end)
{
	if(start>end)
		return;
	printf("%d",start);
		odd(start+2,end);
}


int main()
{
	int min,max;
	printf("enter min and max value");
	scanf("%d %d",&min,&max);
	even(min,max);
	odd(min,max)
}

