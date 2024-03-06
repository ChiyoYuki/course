#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

short i, j;

struct course
{
	short number;
	char name[256];
	float credits;
	char week[256];
	short start;
	short end;
	char type[256];
	short pre_num;
};

struct course test[256];

void input()
{
	char c;
	for (i = 0; i < 200; i++)
	{
		scanf("%hd", &test[i].number);
		getchar();
		for (j = 0; 1; j++)
		{
			scanf("%c", &c);
			if (c == '\t') break;
			test[i].name[j] = c;
		}
		scanf("%f", &test[i].credits);
		getchar();
		for (j = 0; 1; j++)
		{
			scanf("%c", &c);
			if (c == '\t') break;
			test[i].week[j] = c;
		}
		scanf("%hd%hd", &test[i].start, &test[i].end);
		getchar();
		for (j = 0; 1; j++)
		{
			scanf("%c", &c);
			if (c == '\t') break;
			test[i].type[j] = c;
		}
		scanf("%hd", &test[i].pre_num);
	}
}

void test_out();

int main()
{
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	input();
	test_out();
}

void test_out()
{
	for (i = 0; i < 200; i++)
	{
		printf("%hd\t", test[i].number);
		printf("%s\t", test[i].name);
		printf("%g\t", test[i].credits);
		printf("%s\t", test[i].week);
		printf("%hd\t%hd\t", test[i].start, test[i].end);
		printf("%s\t", test[i].type);
		printf("%hd\n", test[i].pre_num);
	}
}