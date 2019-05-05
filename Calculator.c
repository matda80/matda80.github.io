#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(void)
{
	char op;
	int a, b;

	printf("두 개의 정수로 이루어진 식을 입력하시요 : ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op)
	{
	case '+':
		printf("%d %c %d = %d\n", a, op, b, add(a, b));
		break;
	case '-':
		printf("%d %c %d = %d\n", a, op, b, sub(a, b));
		break;
	case '*':
		printf("%d %c %d = %d\n", a, op, b, mul(a, b));
		break;
	case '/':
		if (b == 0)
			printf("계산 오류!!");
		else
			printf("%d %c %d = %d\n", a, op, b, div(a, b));

		break;

	default:
		printf("이 연산자는 지원되지 않습니다.\n");
		break;
	}

	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}