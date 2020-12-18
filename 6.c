#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int gender = 0;
	int married = 0;
	int soldier = 0;
	int child = 0;
	int point = 0;
	char name[20];
	char gen[20];
	char sol[20];
	char marr[20];

	printf("이름? "); //이름 입력
	scanf("%s", &name);

	printf("성별 (남:1, 여:2) ? "); //성별 입력
	scanf("%d", &gender);

	printf("군 제대 (예:1, 아니오:2) ? "); // 군 제대 여부
	scanf("%d", &soldier);

	printf("결혼 (예:1, 아니오:2) ? "); //결혼 여부 묻기
	scanf("%d", &married);

	if (gender == 1) //남자인 경우
		strcpy(gen, "남자");
	else //여자인 경우
	{
		strcpy(gen, "여자");
		point++; //여자라면 1증가
	}

	if (soldier == 1) // 제대 여부
	{
		strcpy(sol, "군필");
		point++; //전역자라면 1증가
	}
	else
		strcpy(sol, "미필");

	if (married == 1) //결혼 한 경우
	{
		strcpy(marr, "기혼");
		point++; //기혼자라면 1증가

		printf("자녀수는? ");
		scanf("%d", &child);
		if (child == 1)
			point++; //자녀가 1명이면 1증가
		else if (child >= 2)
			point += 2; //자녀가 2명 이상이면 +2
	}
	else
		strcpy(marr, "미혼");

	printf("\n>> %s은(는) %s이며, %s이고 %s이다. 자녀수는 %d이므로 총 가산점은 %d점입니다.", name, gen, sol, marr, child, point);

	return 0;
}
