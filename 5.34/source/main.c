#include <stdio.h> 
#include <stdlib.h> 

int power(int base, int exponent);

int main(void)
{
	int m, n;

	printf("��J���ƩM���� : ");
	scanf_s("%d %d", &m, &n);

	printf("%d��%d���謰 : %d\n", m, n, power(m, n));

	system("pause");
	return 0;
}

int power(int base, int exponent)
{
	int i = 1, ans = base;
	if (exponent == 0)
		return i;
	else
	{
		for (i = i; i < exponent; i++)
		{
			ans = ans * base;
		}
	}
	return ans;
}