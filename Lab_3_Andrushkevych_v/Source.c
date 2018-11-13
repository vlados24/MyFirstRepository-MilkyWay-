
#include <stdio.h>
#include <math.h>
void sortMasiv(int mas[5][5]);
void maxMasiv(int mas[5][5]);
int main() {
	
	int masivchuk[5][5];
	for (int i = 0; i < 5;i++) {
		printf("\nRipka %d\n\n", i + 1);
		for (int j = 0;j < 5;j++) {
			printf("Number%d: ", j + 1);
			scanf_s("%d", &masivchuk[i][j]);
		}
	}
	sortMasiv(masivchuk);
	maxMasiv(masivchuk);

	return 0;
}

void sortMasiv(int mas[5][5]) {
	int key, i;

	for (int n = 0; n < 5; n++) {
		for (int j = 1; j < 5; j++) {
			key = mas[j][n];
			i = j - 1;
			while (i >= 0 && mas[i][n] < key) {
				mas[i + 1][n] = mas[i][n];
				i--;
			}
			mas[i + 1][n] = key;
		}
	}

	for (int k = 0; k < 5; k++) {
		for (int l = 0; l < 5; l++)
			printf("%d\t", mas[k][l]);
		printf("\n");
	}
}

void maxMasiv(int mas[5][5]) {
	int maxNumber[5];
	for (int i = 0; i < 5;i++) {
		maxNumber[i] = mas[i][0];
		for (int j = 1;j < 5; j++) {
			if (mas[i][j] > maxNumber[i]) {
				maxNumber[i] = mas[i][j];
			}
			
		}
	}
	printf("\nMax numbers: \n");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", maxNumber[i]);
	}
	int maximum = 0;
	for (int i = 0; i < 5; i++) {
		maximum += maxNumber[i];
	}
	printf("\n");
	printf("Summ of max numbers: %d\n", maximum);
}