//���ʎq�̗L���͈͂��m�F����
#include<stdio.h>

int x = 75;	//A�t�@�C���̗L���͈�

void print_x(void)
{
	printf("x = %d\n", x);
}

int main(void)
{
	int x = 999;	//B�u���b�N�L���͈�

	print_x();

	printf("x = %d\n", x);

	for (int i = 0; i < 5; i++)
	{
		int x = i * 100;	//C�u���b�N�L���͈�
		printf("x = %d\n", x);
	}

	printf("x = %d\n", x);
}