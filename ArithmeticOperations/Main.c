#include<stdio.h>
#include "functions.h"
void main()
{
	int choice,x,y;
	printf("1.Addition\n2.Subtraction\n");
	scanf_s("%d", &choice);
	printf("Please enter your values:");
	scanf_s("%d %d", &x, &y);

	switch (choice)
	{
	case 1:
		printf("%d + %d is equal to %d", x, y, add(x, y));
		break;
	case 2:
		printf("%d - %d is equal to %d", x, y, subtract(x, y));
		break;
	}
}
