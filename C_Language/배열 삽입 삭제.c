#include <stdio.h>

void main() {
	int arr[30] = { 0, };
	int location, n, tmp;
	int mode;
	printf("인덱스번호 값\n\n삭제: 0 삽입: 1\n\n");
	while (1) {
		for (int i = 0; i < 30; i++) {
			printf("%d ", arr[i]);
		}

		printf("\n\n");

		scanf("%d", &mode);

		if (mode == 1) {
			scanf("%d %d", &location, &n);

			printf("\n");
			for (int i = location; i < 30; i++) {
				tmp = arr[i];
				arr[i] = n;
				n = tmp;
			}
		}

		else if (mode == 0) {
			scanf("%d", &location);

			printf("\n");
			for (int i = location; i < 30; i++) {
				arr[i] = arr[i + 1];
			}

			arr[29] = 0;
		}

		else {
			printf("잘못된 모드입니다.\n\n");
		}
	}
}