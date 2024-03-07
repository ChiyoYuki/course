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
		scanf("%s", test[i].name);
		scanf("%f", &test[i].credits);
		scanf("%s", test[i].week);
		scanf("%hd%hd", &test[i].start, &test[i].end);
		scanf("%s", test[i].type);
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