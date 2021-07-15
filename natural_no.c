
//WAP to print natural nos bet given range

#include<stdio.h>
int naturalno(int first,int last)
{
           if(first>last)
	   return;
           printf("%d",first);
          naturalno(first+1,last);


}
int main()
{
	int min,max;
	printf(" enter min and max value");
	scanf("%d %d",&min,&max);
	naturalno(min,max);
}
