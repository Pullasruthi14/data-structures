#include<stdio.h>
int main()
{
	int i, n, a=0,b=1,sum=0;
	printf("\n entr the no of terms in fibonacci series:");
	scanf("%d",&n);
	printf("\n fibonacci series is \n \n \n %d %d ",a,b);
	i=2;
	while(i<n)
	{
		sum=a+b;
		a=b;
		b=sum;
		++i;
		printf("%d",sum);
	}
	return 0;
}
