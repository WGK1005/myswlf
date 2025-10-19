#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int chinese, math, english;	scanf("%d%d%d", &chinese, &math, &english);
	int fail = 0;
	if (chinese < 60)
		fail++;
	if (math < 60)
		fail++;
	if (english < 60)
		fail++;
	if (fail == 1)
		printf("1\n");
	else
		printf("0\n");
}