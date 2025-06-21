#include <stdio.h> // ввод и вывод в консоль

typedef struct {
	int x, y;
	char name[20];
} T1;

int main() {
	T1 A = {11, 444, "Ionish"};
	T1* sPtr = &A;
	
	printf("\n");
	printf("%d, %d, %s\n", sPtr->x, sPtr->y, sPtr->name);
	printf("\n");
	
	return 0;
}
