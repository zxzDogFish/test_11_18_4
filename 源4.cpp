#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, i, j, max, k = 0;
	int a[100] = { 0 }, b[101] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	max = a[0];
	for (i = 0; i < n; i++)
		if (max < a[i])
		{
			max = a[i];
		}
	printf("%d ", max);
	for (i = 0; i < n; i++)
		b[a[i]]++;
	j = b[0];

	for (i = 0; i <= 100; i++)
	{
		if (j <= b[i])
		{
			j = b[i];
		}
	}
	for (i = 100; 0 <= i; i--)
	{
		if (b[i] == j)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}
