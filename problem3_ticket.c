#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ticket()
{
	int age;
	int price;
	printf("나이를 입력하시오:");
	scanf("%d", &age);

	if (age >= 0 && age <= 7)
		price = 0;
	else if (age >= 8 && age <= 13)
		price = 5000;
	else if (age >= 14 && age <= 19)
		price = 8000;
	else if (age >= 20 && age < 65)
		price = 12000;
	else
		price = 12000 / 2;

	printf("final price = %d", price);

	return 0;

}
