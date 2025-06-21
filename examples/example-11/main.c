#include <stdio.h> // ввод и вывод в консоль

int myfunc(char symbol, int a) {
	printf("%c\n", symbol);
	return a;
}

int main() {
	int i = 7;
	
	printf("\n");
	printf("%d\n", i);
	printf("%d\n", myfunc('M', 9));
	printf("\n");
	
	return 0;
}
