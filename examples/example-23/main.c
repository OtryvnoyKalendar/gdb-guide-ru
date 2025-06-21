#include <stdio.h> // ввод и вывод в консоль

int myfunc() {
	return 9;
}

void myproc() {
	int b = 1;
	b += 5;
	printf("%d, %d\n", b, myfunc());
}

int main() {
	int i = 7;
	
	myproc();
	myproc();
	
	printf("\n");
	printf("Hello!\n");
	printf("%d\n", i);
	printf("%d\n", myfunc());
	printf("\n");
	
	return 0;
}
