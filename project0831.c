//�����T���i�ԕ��@�j

#include<stdio.h>

#define NUMBER 5	//�v�f��
#define FAILED -1	//�T�����s

//�v�f��n�̔z��v����key�ƈ�v����v�f��T���i�ԕ��@�j
int search(int v[], int key, int n)
{
	int i = 0;	//�ϐ�i�̏�����
	v[n] = key;	//key��z��v�̗v�f��n�Ɋi�[

	while (1)	//���[�v����
	{
		if (v[i] == key)	//�z��v�̗v�f��i��key�Ɠ�������
		break;
		i++;
	}
	return i < n ? i : FAILED;	//i��n��菬�������i
}

int main(void)
{
	int ky, idx;
	int x[NUMBER + 1];	//�z��x�ɗv�f��NUMBER+1

	int i;
	for (i = 0; i < NUMBER; i++)	//�v�f���̕������J��Ԃ�
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("�T���l�F");
	scanf("%d", &ky);

	if ((idx = search(x, ky, NUMBER)) == FAILED)	//if�����g����search�֐����Ăяo���Bidx�Ɋi�[
		puts("�T���Ɏ��s���܂����B");
	else
		printf("%d��%d�Ԗڂɂ���܂��B\n", ky, idx + 1);

	return 0;
}