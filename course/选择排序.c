#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a[1001];
int i, j;
int main()
{
	short n;
	int mid;
	scanf("%hd", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 1; i < n; i++)
	{
		mid = a[i];
		for (j = i; j >= 0; j--)
		{
			if (mid < a[j-1]) a[j] = a[j-1];
			else
			{
				a[j] = mid;
				break;
			}
		}
		for (j = 0; j < n-1; j++) printf("%d ", a[j]);
		printf("%d\n",a[n-1]);
	}
	return 0;
}