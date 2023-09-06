//n行3列も2次元配列の全構成要素に同一値を代入

#include<stdio.h>

//int[3]型を要素型とする要素数nの配列mの全構成要素にvを代入
void fill(int m[][3], int n, int v)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			m[i][j] = v;
}

//int[3]型を要素型とする要素数nの配列mの全構成要素の値を表示
void mat_print(const int m[][3], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int no; 
	int x[2][3] = { 0 };	//2行3列；要素型はint[3]型で要素数は２
	int y[4][3] = { 0 };	//4行3列；要素型はint[3]型で要素数は４

	printf("全構成要素に代入する値：");
	scanf("%d", &no);

	fill(x, 2, no);
	fill(y, 4, no);

	printf("----x---\n");	mat_print(x, 2);
	printf("----y---\n");	mat_print(y, 4);

	return 0;
}