#include <stdio.h>

int main() {
	int hap = 0;
	int i, cnt;

	printf("더하고 싶은 숫자의 갯수는 ? :");
	scanf("%d", &cnt);
	int aa[cnt];


	for (i = 0; i < cnt; i++)
	{
		printf("%d번째 숫자를 입력하세요 : ", i+1);
		scanf("%d", &aa[i]);
		hap += aa[i];
	}

	printf(" 합계 ==> %d \n", hap);
}
