//4人の学生の3科目のテスト2回分の合計を求めて表示
#include<stdio.h>

//4行3列の行列aとbの和をｃに格納する
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
}

//4行3列の行列mを表示
void mat_print(const int m[4][3])
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
				printf("%d", m[i][j]);
			putchar('\n');
		}
	}

int main(void)
{
	int tensu1[4][3] = { {32, 34, 45}, {34, 45, 56}, {12, 23, 34}, {56, 67, 78} };
	int tensu2[4][3] = { {32, 34, 45}, {34, 45, 56}, {12, 23, 34}, {56, 67, 78} };
	int sum[4][3];

	mat_add(tensu1, tensu2, sum);

	puts("1回目の点数"); mat_print(tensu1);
	puts("2回目の点数"); mat_print(tensu2);
	puts("合計点"); mat_print(sum);

	return 0;
}