#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
	//int chinese, math, english;	scanf("%d%d%d", &chinese, &math, &english);
	//int fail = 0;
	//if (chinese < 60)
		//fail++;
	//if (math < 60)
		//fail++;
	//if (english < 60)
		//fail++;
	//if (fail == 1)
		//printf("1\n");
//	else
		//printf("0\n");


//	return 0;
//}
//void main()
//
//{
//	int a, b, t;
//	scanf("%d%d", &a, &b);
//	t = a;
//	a = b;
//	b = t;
//	printf("a=%d,b=%d", a, b);
//	
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		printf("%d", b);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()//99�˷���
//{
//	int i, t;
//	for (i = 1; i <= 9; i++)
//	{
//		for (t = 1; t <= 9; t++)
//		{
//			printf("%d*%d=%d\n", i, t, i * t);
//		}
//	}
//	return 0;
//}

int main()
{
	int i, t;
	for (i = 100; i <= 200; i++)
	{
		for (t = 2; t < i; t++)
		{
			if (i % t == 0)
				break;
		}
			if (t = i)
			printf("%d\n", i);
		
	}
	return 0;
}