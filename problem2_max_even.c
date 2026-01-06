#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max_even()
{
	int a, b, c;
	int max;
	printf("세 정수를 입력하시오:");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
			max = a;
		else
			max = c;
	}
	else
	{
		if (b > c)
			max = b;
		else
			max = c;
	}

	printf("max=%d\n", max);

	if (max % 2 == 0)
		printf("even number\n");
	else
		printf("odd number\n");

	return 0;

}
