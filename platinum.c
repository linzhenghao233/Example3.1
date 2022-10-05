/*platinum.c -- your weight in platinum*/
#include<stdio.h>
int main(void) {
	float weight;
	float value;

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

	scanf("%f", &weight);//%f说明scanf()读取键盘输入的浮点数，并赋给weight。
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n",value);//%.2f中的.2用于保留小数点后两位。
	printf("You are easily worth that!If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}