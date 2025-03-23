#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>

using namespace std;

void main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	char op = '0';

	printf("Please enter 3 numbers: ");
	scanf(" %d %d %d", &num1, &num2, &num3);
	printf("Please enter an operator (s, m, t):\n");
	scanf(" %c", &op);

	if (op == 's') {
		printf("The sum of the numbers is: %d\n", num1 + num2 + num3);
	}
	else if (op == 'm') {
		printf("The multiplication of the numbers is: %d\n", num1 * num2 * num3);
	}
	else if (op == 't') {
		if (num1 > num2) {
			if (num2 > num3) {
				printf("%d > %d > %d", num1, num2, num3);
			}
			else if (num3 > num1) {
				printf("%d > %d > %d", num3, num1, num2);
			}
			else {
				printf("%d > %d > %d", num1, num3, num2);
			}
		}
		else {
			if (num1 > num3) {
				printf("%d > %d > %d", num2, num1, num3);
			}
			else if (num3 > num2) {
				printf("%d > %d > %d", num3, num2, num1);
			}
			else {
				printf("%d > %d > %d", num2, num3, num1);
			}
		}
	}
	else {
		printf("Invalid operator character.");
	}
}