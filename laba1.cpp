#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* найти количество больших элементов данного в области*/

int oblast(int[10][10], int, int, int, int);

int main() {
	int a[10][10];
	int N, M;
	do {
		printf("vvedite N and M cherez probel\n");
		scanf("%d %d", &N, &M);
	} while (N * M > 100);
	printf("vvedite elementi massiva\n");
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < M; y++) {
			scanf("%d", &a[x][y]);
		}
	}
	printf("-------------------\n");
	int f = 1;
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < M; y++) {
			int kol = oblast(a, N, M, x, y);
			printf("|%d | %2d | %2d | %3d |\n", f, x, y, kol);
			f++;
			printf("-------------------\n");
		}
	}
}
int oblast(int a[10][10], int N, int M, int i, int j) {
	int c = 0, cx1 = 0, cx2 = 0;
	int B[10];
	if (i == 0) {
		for (int s = j; s >= 0; s--) {
			if (cx2 < 4) {
				B[c] = a[i][s];
				c++;
				cx2++;
			}
			else break;
		}
	}
	else {
		for (int s = j; s < M; s++) {
			if (cx1 < 3) {
				B[c] = a[i - 1][s];
				cx1++;
				c++;
			}
			else break;
		}
		for(int s = j; s >= 0; s--) {
			if (cx2 < 4) {
				B[c] = a[i][s];
				c++;
				cx2++;
			}
			else break;
		}
	}
	int kol = 0;
	int tmp = a[i][j];
	for (int f = 0; f < c; f++) {
		if (B[f] > tmp) kol++;
	}
	return kol;
}
