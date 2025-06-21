#include <stdio.h> // ввод и вывод в консоль

int myfunc() {
	printf("\n");
	return 9;
}

int main() {
	int i = 7;
	
	printf("\n");
	printf("%d\n", i);
	printf("%d\n", myfunc());
	printf("\n");
	
	return 0;
}
