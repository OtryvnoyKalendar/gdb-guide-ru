#include <stdio.h> // ввод и вывод в консоль

typedef struct {
	int x, y;
	char name[20];
} T1;

int main() {
	T1 A = {11, 444, "Ionish"};
	
	printf("\n");
	printf("%d, %d, %s\n", A.x, A.y, A.name);
	printf("\n");
	
	return 0;
}
