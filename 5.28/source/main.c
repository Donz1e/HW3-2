#include <stdio.h>
#include <stdlib.h>

int turn(int);

int main(void)
{
	char a;
	
	printf("��J�@�j�g�^��r�� : ");
	scanf_s("%c", &a);
	printf("��p�g�^��r���� : %c\n", turn(a));

	system("pause");
	return 0;
}

int turn(int x)
{
	return x = x + 32;
}