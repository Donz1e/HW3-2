#include <stdio.h> 
#include <stdlib.h> 

int num(int);

int main(void)
{
	int i, x;

	printf("輸入要顯示的個數 : ");
	scanf_s("%d", &x);

	for (i = 0; i < x; i++)
	{
		if (i <= 1)
			printf("%d ", i);
		else
			printf("%d ", num(i));
	}

	printf("\n");
	system("pause");
	return 0;
}

int num(int x)
{
	int i, n1 = 0, n2 = 1, ans;

	for (i = 1; i < x; i++)
	{
		ans = n1 + n2;
		n1 = n2;
		n2 = ans;
	}
	return ans;
}