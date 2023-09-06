//識別子の有効範囲を確認する
#include<stdio.h>

int x = 75;	//Aファイルの有効範囲

void print_x(void)
{
	printf("x = %d\n", x);
}

int main(void)
{
	int x = 999;	//Bブロック有効範囲

	print_x();

	printf("x = %d\n", x);

	for (int i = 0; i < 5; i++)
	{
		int x = i * 100;	//Cブロック有効範囲
		printf("x = %d\n", x);
	}

	printf("x = %d\n", x);
}