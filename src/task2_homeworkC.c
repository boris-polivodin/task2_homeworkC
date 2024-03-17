/*
 ============================================================================
 Name        : task2_homeworkC.c
 Author      : admin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//float num1, num2;
//float res;

int main(void) {
//	printf("Input first number: ");
//	scanf("%f", &num1);
//
//	printf("Input second number: ");
//	scanf("%f", &num2);
//
//	res = num1/num2;
//	printf("result = %012.4f\n", res);
//	printf("new line\n");
//
//
//	int a1, n, d;
//	int sum;
//	scanf("%d%d%d", &a1, &n, &d);
//	sum = (2*a1 + (n-1)*d)*n / 2;
//	printf("%d\n", sum);
//
//	int x;
//	scanf("%d", &x);
//	printf("%d", (x / 100) * ((x % 100) / 10) * (x % 10));


	int num1, num2, num3;
	printf("Input 3 number: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("%d + %d + %d = %d\n", num1, num2, num3, num1 + num2 + num3);
	printf("%d * %d * %d = %d\n", num1, num2, num3, num1 * num2 * num3);
	printf("%d - %d - %d = %d\n", num1, num2, num3, num1 - num2 - num3);

	printf("Input 4-digit number: ");
	scanf("%d", &num1);
	float average = ((num1 / 1000) + (num1 % 1000) / 100 + (num1 % 100) / 10 + (num1 % 10))/4.;
	printf("Average = %.2f\n", average);

	return 0;
}
