//трока из пробелов и групп цифр. Найти сумму всех чисел в строке.
#include <stdio.h>
#include <malloc.h>
#include <math.h>

int main() {
	printf("Input Line:\n");
	int a = 0, i = 0;
	char* str = (char*)malloc(80);
	gets(str);

	while ((str[i] != '\0') && (str[i] != '\n')) {
		if ((str[i] <= '9') && (str[i] >= '0')) {
			a += str[i] - 48;
		}
		i++;
	}

	free(str);
	printf("%d", a);
	return 0;
}
