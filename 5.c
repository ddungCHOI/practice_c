#include <stdio.h>
#include <malloc.h>

void change_CDH();
void draw_CDH();
void main() {
	change_CDH();
	draw_CDH();
}
void change_CDH() {
	int i, j, l = 0;
	printf("문자열을 대소문자를 구분하여 입력 : ");
	char input[100];
	char output[100];
	scanf_s("%s", input, 100);
	for (i = 0; i < 100; ++i, ++l)
		if (input[i] == '\0')
			break;
	for (i = 0, j = l - 1; j >= 0; --j, ++i)
	{
		if (input[j] < 97)output[i] = (input[j] - 65) + 97;
		else output[i] = (input[j] - 97) + 65;
	}
	output[l] = '\0';
	printf("-------------------------------------\n변환된 결과물 출력 >> %s\n======================================\n", output);
}
void draw_CDH() {
	int n = -1;
	printf("5부터 10사이의 홀수정수를 입력하시오.\n(0을 입력시 프로그램 종료)\n");

	while (1)
	{
		printf("정수 입력 : ");
		scanf_s("%d", &n);
		printf("-----------------------------------------------------------\n");
		if (n == 0)
		{
			printf("♥프로그램을 종료합니다. 이름 : \n");
			break;
		}
		if (n % 2 == 0)
		{
			printf("★ 홀수를 입력하시오. 학번: \n-----------------------------------------------------------\n");
			continue;
		}
		if (n < 5 || n>10)
		{
			printf("☆ 5부터 10사이의 홀수를 입력하시오.\n-----------------------------------------------------------\n");
			continue;
		}
		int** board = (int**)malloc(sizeof(int*) * n);
		int i = 0;
		
		for (i = 0; i < n; ++i)
			board[i] = (int*)malloc(sizeof(int) * n);

		int u = n - 1, d = 0, x = 1;
		int sign = -1;

		int j = 0;
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				if (j >= d && j <= u)
				{
					board[j][i] = x;
					x += 1;
				}
				else
					board[j][i] = 0;
			}
			if (u == d) sign = 1;
			u += sign;
			d -= sign;
		}

		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++)
			{
				if (board[i][j] == 0)
					printf("  ");
				else if (board[i][j] < 10)
					printf("0%d", board[i][j]);
				else printf("%d", board[i][j]);
				printf(" ");
			}
			printf("\n");
		}
		printf("-----------------------------------------------------------\n");
		free(board);
	}
}
