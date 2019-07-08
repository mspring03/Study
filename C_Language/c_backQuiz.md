# c언어 백 퀴즈

2back 이면 두번 전 차례에 나온 숫자와 지금 숫자가 같으면 'O' 아니면 'X' 이다.

3 2 3 1 0
      3 2 3
     O X X

---

```c
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

#pragma warning(disable:4996)

void main() {
	int lon, range, back;
	int *p;
	char *cp;
	printf("숫자갯수 범위 몇 -백 입력\n");
	scanf("%d %d %d", &lon, &range, &back);
	p = (int *)malloc((lon + 1)* sizeof(int));
	cp = (char *)malloc((lon + 1) * sizeof(char));
	srand(time(NULL));
	for (int i = 0; i < lon; i++) {
		p[i] = rand() % (range + 1);
	}
	for (int i = back; i < lon; i++) {
		if (p[i] == p[i - back])
			cp[i] = 'O';
		else
			cp[i] = 'X';
	}
	system("cls");
	for (int i = 0; i < lon; i++) {
		printf("%d", p[i]);
		Sleep(2000);
		system("cls");
	}
	for (int i = 0; i < lon; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");
	for (int i = 0; i < back; i++)
		printf("  ");
	for (int i = 0; i < lon - back; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");
	for (int i = 0; i < back; i++)
		printf("  ");
	for (int i = back; i < lon; i++) {
		printf("%c ", cp[i]);
	}
	printf("\n");
	system("pause");
}
```

