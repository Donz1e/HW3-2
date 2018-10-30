#include <stdio.h>
#include <stdlib.h>

int turn(int);

int main(void)
{
	char a;
	
	printf("輸入一大寫英文字母 : ");
	scanf_s("%c", &a);
	printf("其小寫英文字母為 : %c\n", turn(a));

	system("pause");
	return 0;
}

int turn(int x)
{
	return x = x + 32;
}