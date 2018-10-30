#include <stdio.h> 
#include <stdlib.h> 

int gcd(int m, int n);
int lcm(int m, int n);

int main(void) 
{
	int m, n;

	printf("輸入兩數 : ");
	scanf_s("%d %d", &m, &n);

	printf("最小公倍數：%d\n", lcm(m, n));

	system("pause");
	return 0;
}

int gcd(int m, int n) 
{
	while (n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int lcm(int m, int n)
{
	return m * n / gcd(m, n);
}