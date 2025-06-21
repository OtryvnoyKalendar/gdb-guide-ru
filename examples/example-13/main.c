#include <stdio.h> // ввод и вывод в консоль

int myfunc();

int main() {
	int i = 7;
	
	printf("\n");
	printf("%d\n", i);
	printf("%d\n", myfunc());
	printf("\n");
	
	return 0;
}

int myfunc() {
	printf("\n");
	return 9;
}
