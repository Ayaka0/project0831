
#include<stdio.h>

#define NUMBER 3

int min_of(int v[], int n)
{
	int min = v[0];

	for (int i = 1; i < n; i++)
		if (v[i] < min)
			min = v[i];
	return min;
}

int main(void)
{
	int eng[NUMBER];
	int mat[NUMBER];

	printf("%d�l�̓_������͂���B\n", NUMBER);
	for (int i = 0; i < NUMBER; i++)
	{
		printf("[%d] �p��F", i + 1); scanf("%d", &eng[i]);
		printf("[%d] ���w�F", i + 1); scanf("%d", &mat[i]);
	}

	int min_e = min_of(eng, NUMBER);
	int min_m = min_of(mat, NUMBER);
	
	printf("�p��̍Œ�_=%d\n", min_e);
	printf("���w�̍Œ�_=%d\n", min_m);

	return 0;
}