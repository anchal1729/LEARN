#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a \n");
	scanf("%d",&a);
	printf("enter the value of b \n");
	scanf("%ds",&b);
	a=a^b;
	b=a^b;
	a=a^b;
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
}