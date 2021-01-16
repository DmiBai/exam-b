#include <stdio.h>
#include <malloc.h>
#include <math.h>

int main() {
	int** arr;
	int a, i, j, c=0;

	scanf_s("%d", &a);
	arr = (int**)malloc(a * sizeof(int*));
	
	for (i = 0; i < a; i++) {
		arr[i] = (int*)malloc(a * sizeof(int));
	}

	for (i = 0; i < a; i++) {
		for (j = 0; j < a; j++) {
			arr[i][j] = rand(100);
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	i = 0;
	j = 0;
	int aa;
	aa = a;
	printf("\n");
	printf("\n");
	do {
		do {
			c = arr[i][j];
			arr[i][j] = arr[a - 1 - j][a - 1 - i];
			arr[a - 1 - j][a - 1 - i] = c;
			j++;
			
		} while (j<aa);
		i++;
		aa--;
		j = 0;
	} while (i < a);

	for (i = 0; i < a; i++) {
		for (j = 0; j < a; j++)	{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
