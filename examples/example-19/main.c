#include <stdio.h> // ввод и вывод в консоль

int main() {
	int i = 7;
	int j = 9;
	int* iPtr = &i;
	iPtr = &j;
	
	printf("\n");
	printf("%d\n", *iPtr);
	printf("\n");
	
	return 0;
}
