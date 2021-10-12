#include <stdio.h>
int main(void)
{
	int num,cnt=0,i=0;
	printf("Please enter a number:");
	scanf_s("%d", &num);
	for (i=2; i<=num-1; i++)
	{
		if (num % i == 0)
			cnt++;
	}
	if (cnt==0)
     	printf("It is a prime number");
	return 0;

}