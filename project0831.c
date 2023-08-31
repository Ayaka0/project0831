//逐次探索（番兵法）

#include<stdio.h>

#define NUMBER 5	//要素数
#define FAILED -1	//探索失敗

//要素数nの配列vからkeyと一致する要素を探索（番兵法）
int search(int v[], int key, int n)
{
	int i = 0;	//変数iの初期化
	v[n] = key;	//keyを配列vの要素数nに格納

	while (1)	//ループ処理
	{
		if (v[i] == key)	//配列vの要素数iがkeyと等しい時
		break;
		i++;
	}
	return i < n ? i : FAILED;	//iがnより小さければi
}

int main(void)
{
	int ky, idx;
	int x[NUMBER + 1];	//配列xに要素数NUMBER+1

	int i;
	for (i = 0; i < NUMBER; i++)	//要素数の文だけ繰り返す
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("探す値：");
	scanf("%d", &ky);

	if ((idx = search(x, ky, NUMBER)) == FAILED)	//if文を使ってsearch関数を呼び出す。idxに格納
		puts("探索に失敗しました。");
	else
		printf("%dは%d番目にあります。\n", ky, idx + 1);

	return 0;
}