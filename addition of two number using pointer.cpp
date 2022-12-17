#include<stdio.h>
int main()
{
	int a,b,*x,*y;
	x=&a;
	y=&b;
	printf("Enter two number");
	scanf("%d%d",x,y);
	printf("Addition is %d",*x+*y);
	return 0;
}
