#include<stdio.h>

void menu(void);
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

void menu(void) {
	printf("=====================\n");
	printf("0. µ¡¼À\n");
	printf("1. –E¼À\n");
	printf("2. °ö¼À\n");
	printf("3. ³ª´°¼À\n");
	printf("4. Á¾·á\n");
	printf("=====================\n");
}

int main(void) {
	int choice, result, x, y;
	int (*pf[4])(int, int) = {add, sub, mul, div};

	while (1) {
		menu();
		printf("¸Þ´º¸¦ ¼±ÅÃÇÏ½Ã¿À:");
		scanf("%d", &choice);

		if (choice < 0 || choice >= 4) {
			break;
		}

		printf("2°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À:");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y);
		printf("¿¬»ê °á°ú = %d\n", result);
	}
	return 0;
}

int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}

